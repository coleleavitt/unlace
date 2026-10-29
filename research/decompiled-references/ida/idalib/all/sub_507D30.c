unsigned __int64 __fastcall sub_507D30(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  _BYTE *v5; // rsi
  char *v7; // rdx
  char v8; // al
  int v9; // edi
  void *ptr; // [rsp+0h] [rbp-1038h] BYREF
  __int128 v11; // [rsp+8h] [rbp-1030h]
  _BYTE v12[4]; // [rsp+1Ch] [rbp-101Ch] BYREF
  _BYTE v13[4104]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v14; // [rsp+1028h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  if ( !a2 )
    sub_378C70((__int64)"ranges:file == nullptr!");
  v3 = *a1;
  ptr = nullptr;
  v11 = 0;
  netnode_get_name(v3, &ptr);
  if ( a3 )
  {
    v12[0] = 0;
    if ( (_QWORD)v11 && (v7 = (char *)ptr, (v8 = *(_BYTE *)ptr) != 0) )
    {
      v9 = 0;
      v5 = v12;
      do
      {
        if ( (v8 & 0xFB) != 0x20 )
        {
          ++v9;
          *v5++ = v8;
          if ( v9 == 3 )
            break;
        }
        v8 = *++v7;
      }
      while ( v8 );
    }
    else
    {
      v5 = v12;
    }
    *v5 = 0;
    sub_592AF0(qword_2CCB598, v13, 4096, v12);
    qunlink(v13);
  }
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v14 - __readfsqword(0x28u);
}
