__int64 __fastcall sub_7FD650(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  __int64 *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // r14
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // r14
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // r14
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 *v22; // rbx
  __int64 *v23; // r12

  if ( (unsigned __int8)sub_7EF1F0((__int64)a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), a4, a5, a6)
    && (unsigned __int8)sub_7F0C20(a1, *(_QWORD *)(a2 + 72), *(__int64 **)(a2 + 88)) )
  {
    v8 = (__int64 *)(a2 + 96);
    v9 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
    if ( v9 == a2 + 96 )
    {
LABEL_8:
      if ( (unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 24)) )
      {
        v6 = sub_7EBA80(a1, *(_QWORD *)(a2 + 40));
        if ( (_BYTE)v6 )
        {
          v10 = *(unsigned int *)(a2 + 16);
          v11 = (__int64 *)(a2 + 8 * v10 + 96);
          v12 = &v11[v10];
          if ( v11 == v12 )
          {
            v13 = 0;
LABEL_14:
            v14 = (__int64 *)(a2 + 16 * v10 + 96);
            v15 = &v14[v13];
            if ( v15 == v14 )
            {
              v16 = 0;
LABEL_18:
              v17 = (__int64 *)(a2 + 24 * v10 + 96);
              v18 = &v17[v16];
              if ( v17 == v18 )
              {
                v19 = 0;
LABEL_22:
                v20 = (__int64 *)(a2 + 32 * v10 + 96);
                v21 = &v20[v19];
                if ( v20 == v21 )
                {
LABEL_26:
                  v22 = (__int64 *)(a2 + 40 * v10 + 96);
                  v23 = &v22[v10];
                  if ( v22 == v23 )
                    return v6;
                  while ( (unsigned __int8)sub_7EBA80(a1, *v22) )
                  {
                    if ( v23 == ++v22 )
                      return v6;
                  }
                }
                else
                {
                  while ( (unsigned __int8)sub_7EBA80(a1, *v20) )
                  {
                    if ( v21 == ++v20 )
                    {
                      v10 = *(unsigned int *)(a2 + 16);
                      goto LABEL_26;
                    }
                  }
                }
              }
              else
              {
                while ( (unsigned __int8)sub_7EBA80(a1, *v17) )
                {
                  if ( v18 == ++v17 )
                  {
                    v10 = *(unsigned int *)(a2 + 16);
                    v19 = v10;
                    goto LABEL_22;
                  }
                }
              }
            }
            else
            {
              while ( (unsigned __int8)sub_7EBA80(a1, *v14) )
              {
                if ( v15 == ++v14 )
                {
                  v10 = *(unsigned int *)(a2 + 16);
                  v16 = v10;
                  goto LABEL_18;
                }
              }
            }
          }
          else
          {
            while ( (unsigned __int8)sub_7EBA80(a1, *v11) )
            {
              if ( v12 == ++v11 )
              {
                v10 = *(unsigned int *)(a2 + 16);
                v13 = v10;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
    else
    {
      while ( (unsigned __int8)sub_7EBA80(a1, *v8) )
      {
        if ( (__int64 *)v9 == ++v8 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}

