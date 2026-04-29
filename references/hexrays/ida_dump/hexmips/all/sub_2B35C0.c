unsigned __int64 __fastcall sub_2B35C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  size_t v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v20[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a1[1];
  v5 = *a1;
  v21[0] = __readfsqword(0x28u);
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v18 = qvector_reserve(a1, v5, v4 + 1, 1);
    *a1 = v18;
    v5 = v18;
    v4 = a1[1];
  }
  *(_BYTE *)(v5 + v4) = 1;
  ++a1[1];
  v7 = pack_dd(v19, v20, *(unsigned int *)(a2 + 8)) - (_QWORD)v19;
  if ( v7 )
    sub_2ADF90(a1, v19, v7);
  v8 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      v9 = (_QWORD *)v8[1];
      if ( v8 != v9 )
      {
        while ( 1 )
        {
LABEL_8:
          v10 = pack_dq(v19, v21, v9[3] + 1 - a3) - (_QWORD)v19;
          if ( v10 )
            sub_2ADF90(a1, v19, v10);
          v11 = pack_dd(v19, v20, *((unsigned int *)v9 + 8)) - (_QWORD)v19;
          if ( v11 )
            sub_2ADF90(a1, v19, v11);
          v12 = pack_dd(v19, v20, *((unsigned int *)v9 + 10)) - (_QWORD)v19;
          if ( v12 )
            sub_2ADF90(a1, v19, v12);
          if ( (*v9 & 2) != 0 )
            goto LABEL_17;
          v13 = (_QWORD *)v9[2];
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
            v15 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = *v15;
            if ( (*v15 & 2) == 0 )
            {
              while ( v9 == (_QWORD *)v15[2] )
              {
                v9 = v15;
                v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v16 & 2) != 0 )
                {
                  v9 = (_QWORD *)v17;
                  if ( v8 != (_QWORD *)v17 )
                    goto LABEL_8;
                  return v21[0] - __readfsqword(0x28u);
                }
                v15 = (_QWORD *)v17;
              }
            }
            v9 = v15;
            if ( v8 == v15 )
              return v21[0] - __readfsqword(0x28u);
          }
          else
          {
            do
            {
              v9 = v13;
              v13 = (_QWORD *)v13[1];
            }
            while ( (*(_BYTE *)v13 & 2) == 0 );
LABEL_17:
            if ( v8 == v9 )
              return v21[0] - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v21[0] - __readfsqword(0x28u);
}
