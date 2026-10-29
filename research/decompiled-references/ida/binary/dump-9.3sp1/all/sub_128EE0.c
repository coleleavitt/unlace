__int64 __fastcall sub_128EE0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // r13
  char v17; // al
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rbx
  int v24; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+8h] [rbp-40h]
  int v26; // [rsp+10h] [rbp-38h]
  int v27; // [rsp+18h] [rbp-30h]
  __int64 v28; // [rsp+20h] [rbp-28h]

  v12 = (__int64)a3;
  result = *a3;
  if ( (_BYTE)result == 4 )
    return sub_127FE0(a1, a2, v12, a4, a5, a6, a7, a8, a9, a10, a11);
  while ( (_BYTE)result == 14 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    v15 = *(_BYTE *)v14;
    if ( *(_BYTE *)v14 == 4 )
    {
LABEL_14:
      sub_127FE0(a1, a2, v14, a4, a5, a6, v24, v25, v26, v27, v28);
    }
    else
    {
      while ( v15 == 14 )
      {
        v16 = *(_QWORD *)(v14 + 8);
        v17 = *(_BYTE *)v16;
        if ( *(_BYTE *)v16 == 4 )
        {
LABEL_12:
          sub_127FE0(a1, a2, v16, a4, a5, a6, v24, v25, v26, v27, v28);
        }
        else
        {
          while ( v17 == 14 )
          {
            v18 = *(_QWORD *)(v16 + 8);
            v19 = *(_BYTE *)v18;
            if ( *(_BYTE *)v18 == 4 )
            {
LABEL_10:
              sub_127FE0(a1, a2, v18, a4, a5, a6, v24, v25, v26, v27, v28);
            }
            else
            {
              while ( v19 == 14 )
              {
                v25 = v18;
                sub_128EE0(a1, a2, *(_QWORD *)(v18 + 8), a4);
                v20 = *(_QWORD *)(v25 + 8);
                v19 = *(_BYTE *)(v20 + 16);
                v18 = v20 + 16;
                if ( v19 == 4 )
                  goto LABEL_10;
              }
            }
            v21 = *(_QWORD *)(v16 + 8);
            v17 = *(_BYTE *)(v21 + 16);
            v16 = v21 + 16;
            if ( v17 == 4 )
              goto LABEL_12;
          }
        }
        v22 = *(_QWORD *)(v14 + 8);
        v15 = *(_BYTE *)(v22 + 16);
        v14 = v22 + 16;
        if ( v15 == 4 )
          goto LABEL_14;
      }
    }
    v23 = *(_QWORD *)(v12 + 8);
    result = *(unsigned __int8 *)(v23 + 16);
    v12 = v23 + 16;
    if ( (_BYTE)result == 4 )
      return sub_127FE0(a1, a2, v12, a4, a5, a6, a7, a8, a9, a10, a11);
  }
  return result;
}
