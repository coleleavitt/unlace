__int64 __fastcall sub_884210(void *a1, unsigned __int64 a2, const void *a3, size_t a4, _WORD *a5, _WORD *a6)
{
  void *v9; // r14
  _WORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _BYTE src[160]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE dest[168]; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned __int64 v17; // [rsp+168h] [rbp-40h]

  v9 = qword_2CAD130;
  v17 = __readfsqword(0x28u);
  qmutex_lock(qword_2CAD130);
  word_2CAD362 = 80;
  memset(src, 0, sizeof(src));
  memset(dest, 0, 0xA0u);
  if ( a4 > 0xA0 )
  {
    if ( !under_debugger )
      interr(3245);
    goto LABEL_10;
  }
  v10 = memcpy(dest, a3, a4);
  v11 = sub_884120(src, v10, a5, a6);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( a2 >= v11 )
    {
      memcpy(a1, src, v11);
      goto LABEL_5;
    }
    if ( !under_debugger )
      interr(3246);
LABEL_10:
    BUG();
  }
LABEL_5:
  qmutex_unlock(v9);
  return v12;
}

