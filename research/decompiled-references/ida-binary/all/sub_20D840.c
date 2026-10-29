__int64 __fastcall sub_20D840(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned int v3; // r15d
  _QWORD *v5; // rbp
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v12; // [rsp+1Ch] [rbp-ACh]
  _QWORD *v13; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  int v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+4Ch] [rbp-7Ch]
  int v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h]
  unsigned __int64 v21; // [rsp+88h] [rbp-40h]

  v3 = 0;
  v21 = __readfsqword(0x28u);
  v13 = a1;
  v15 = 0;
  v16 = a2;
  v18 = 0;
  if ( a1 )
  {
    v5 = (_QWORD *)a2;
    v7 = 0;
    v8 = 0;
    v3 = 0;
    while ( 1 )
    {
      v9 = *(int *)(dbg + 64LL);
      if ( (int)v9 <= v8 )
        break;
      a2 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)v8 >> 3));
      if ( !_bittest((const int *)&a2, v8 & 7) )
      {
        a2 = *(unsigned __int8 *)(*v5 + ((unsigned __int64)v7 >> 3));
        if ( _bittest((const int *)&a2, v7 & 7) || a3 && v5[4] == v9 )
        {
          v17 = v7;
          sub_20D070((__int64)&v19, (int *)&v16);
          a2 = (unsigned int)v8;
          v12 = v19;
          sub_20D660(a1, v8, (__int64)&v19);
          if ( v12 >= -1 && v20 )
            qfree(v20, (const char *)(unsigned int)v8);
          ++v3;
        }
      }
      v14 = v8;
      sub_20D150((__int64)&v13);
      v8 = v14;
      v17 = v7;
      sub_20D150((__int64)&v16);
      if ( v8 < 0 )
        break;
      v7 = v17;
    }
  }
  v10 = a1[6];
  if ( v10 )
  {
    a1[7] = 0;
    qfree(v10, (const char *)a2);
    a1[6] = 0;
    a1[8] = 0;
  }
  return v3;
}
