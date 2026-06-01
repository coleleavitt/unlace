char *__fastcall sub_552700(__int64 a1, char *a2, double a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // r12d
  char v9; // di
  unsigned __int8 v10; // al
  char *result; // rax
  char *v12; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v12 = a2;
  v15 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *a2;
  if ( !*a2 )
    goto LABEL_16;
  *(_DWORD *)(a1 + 32) = 1;
  v10 = v9 & 0xF;
  if ( (v9 & 0xF) == 0xC )
  {
    result = (char *)sub_551F20(a1, (__int64)a2, a3, a4);
    goto LABEL_7;
  }
  if ( v10 == 13 )
  {
    if ( (~v9 & 0x30) != 0 )
      goto LABEL_5;
    ptr = nullptr;
    v12 = a2 + 1;
    v14 = 0;
    if ( (unsigned __int8)sub_54DE00((__int64)&ptr, &v12) && (unsigned __int64)v14 > 1 )
    {
      if ( ptr )
        qfree(ptr);
      goto LABEL_6;
    }
    if ( ptr )
      qfree(ptr);
LABEL_16:
    result = nullptr;
    goto LABEL_7;
  }
  if ( v10 <= 9u )
  {
    if ( sub_54C420(v9, a2) != -1 )
    {
      result = a2 + 1;
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_5:
  if ( sub_551530(a1, (__int64 *)&v12, nullptr, nullptr, a7, a3, a4) == -1 )
    goto LABEL_16;
LABEL_6:
  result = v12;
LABEL_7:
  *(_DWORD *)(a1 + 32) = v8;
  return result;
}

