__int64 __fastcall sub_9ED00(_QWORD *a1, _QWORD *a2, char a3)
{
  unsigned int v3; // r15d
  int v6; // r12d
  int v7; // r14d
  __int64 v8; // rax
  int v10; // esi
  int v11; // esi
  int v12; // [rsp+1Ch] [rbp-ACh]
  _QWORD *v13; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+2Ch] [rbp-9Ch]
  _QWORD *v16; // [rsp+40h] [rbp-88h] BYREF
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
    v6 = 0;
    v7 = 0;
    v3 = 0;
    while ( 1 )
    {
      v8 = *(int *)(dbg + 64LL);
      if ( (int)v8 <= v7 )
        break;
      v10 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)v7 >> 3));
      if ( !_bittest(&v10, v7 & 7) )
      {
        v11 = *(unsigned __int8 *)(*a2 + ((unsigned __int64)v6 >> 3));
        if ( _bittest(&v11, v6 & 7) || a3 && a2[4] == v8 )
        {
          v17 = v6;
          sub_9E530((__int64)&v19, (int *)&v16);
          v12 = v19;
          sub_9EB20(a1, v7, (__int64)&v19);
          if ( v12 >= -1 && v20 )
            qfree();
          ++v3;
        }
      }
      v14 = v7;
      sub_9E610((__int64)&v13);
      v7 = v14;
      v17 = v6;
      sub_9E610((__int64)&v16);
      if ( v7 < 0 )
        break;
      v6 = v17;
    }
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
    a1[6] = 0;
    a1[8] = 0;
  }
  return v3;
}

