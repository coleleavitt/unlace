__int64 __fastcall sub_9C2960(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rbx
  __int64 i; // rsi
  __int64 v20; // rdx
  int *v21; // rax
  __int64 v22; // r12
  void *v23; // rbx
  int v24; // edx
  int v25; // edx
  __int64 v26; // rbx
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // r13
  unsigned int v30; // r13d
  __int64 v31; // r12
  __int64 v32; // rax
  int *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // r13
  unsigned int v38; // r13d
  __int64 v39; // r12
  __int64 v40; // rax
  int *v41; // rax
  int *v42; // r12
  _DWORD *v43; // [rsp+8h] [rbp-80h]
  _DWORD *v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  void *v47; // [rsp+20h] [rbp-68h]
  void *v48; // [rsp+20h] [rbp-68h]
  int v49[4]; // [rsp+30h] [rbp-58h] BYREF
  int v50; // [rsp+40h] [rbp-48h] BYREF
  char v51; // [rsp+44h] [rbp-44h]

  result = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v7 = result + 40LL * *(unsigned int *)(result - 4);
    if ( v7 != result )
    {
      v8 = *(_QWORD *)a2;
      v9 = 0;
      do
      {
        v10 = *(unsigned int *)(v8 + 32);
        if ( (_DWORD)v10 != -1 )
          *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v10) = v9;
        v8 += 40;
        ++v9;
      }
      while ( v7 != v8 );
    }
  }
  v11 = *a4;
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
      {
        if ( v11 )
        {
          v26 = v11 + 40LL * *(unsigned int *)(v11 - 4);
          if ( v26 != v11 )
          {
            do
            {
              v30 = *(_DWORD *)(v11 + 32);
              if ( v30 != -1 )
              {
                v31 = v30;
                v32 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 4LL * v30);
                if ( (_DWORD)v32 == -1 )
                {
                  v33 = sub_9C25B0(a2, v49);
                  v33[8] = v30;
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)v11);
                }
                else
                {
                  v27 = 40 * v32;
                  v43 = (_DWORD *)(40 * v32 + *(_QWORD *)a2);
                  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v43, v11, (__int64)v43);
                  if ( !*v43 )
                  {
                    v28 = *(_DWORD *)(a2 + 16);
                    v29 = *(_QWORD *)a2 + v27;
                    *(_DWORD *)(v29 + 32) = -1;
                    *(_DWORD *)(v29 + 36) = v28;
                    --*(_DWORD *)(a2 + 8);
                  }
                  *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v31) = -1;
                }
              }
              v11 += 40;
            }
            while ( v11 != v26 );
            goto LABEL_23;
          }
        }
        goto LABEL_24;
      }
    }
    else if ( *(_DWORD *)a3 == -1 && (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
    {
      if ( v11 )
      {
        v34 = v11 + 40LL * *(unsigned int *)(v11 - 4);
        if ( v34 != v11 )
        {
          do
          {
            v38 = *(_DWORD *)(v11 + 32);
            if ( v38 != -1 )
            {
              v39 = v38;
              v40 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 4LL * v38);
              if ( (_DWORD)v40 == -1 )
              {
                v41 = sub_9C25B0(a2, v49);
                v41[8] = v38;
                v42 = v41;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)v41, (int *)v11);
                sub_1831620(qword_1C7F2C0, v42);
              }
              else
              {
                v35 = 40 * v40;
                v44 = (_DWORD *)(40 * v40 + *(_QWORD *)a2);
                sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v44, v11, (__int64)v44);
                if ( !*v44 )
                {
                  v36 = *(_DWORD *)(a2 + 16);
                  v37 = *(_QWORD *)a2 + v35;
                  *(_DWORD *)(v37 + 32) = -1;
                  *(_DWORD *)(v37 + 36) = v36;
                  --*(_DWORD *)(a2 + 8);
                }
                *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v39) = -1;
              }
            }
            v11 += 40;
          }
          while ( v11 != v34 );
LABEL_23:
          result = *(_QWORD *)a2;
          goto LABEL_24;
        }
      }
      goto LABEL_24;
    }
  }
  if ( v11 )
  {
    v45 = v11 + 40LL * *(unsigned int *)(v11 - 4);
    if ( v45 != v11 )
    {
      do
      {
        v12 = *(_DWORD *)(v11 + 32);
        if ( v12 != -1 )
        {
          v13 = v12;
          v14 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 4LL * v12);
          if ( (_DWORD)v14 == -1 )
          {
            v21 = sub_9C25B0(a2, v49);
            v21[8] = v12;
            v22 = (__int64)v21;
            v23 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v21, v11);
            }
            else
            {
              v24 = *(_DWORD *)v11;
              *((_BYTE *)v21 + 4) &= ~1u;
              *v21 = v24;
            }
            if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
            {
              sub_182C690(v23, v22 + 16, v11 + 16);
            }
            else
            {
              v25 = *(_DWORD *)(v11 + 16);
              *(_BYTE *)(v22 + 20) &= ~1u;
              *(_DWORD *)(v22 + 16) = v25;
            }
            sub_9AF730((__int64)qword_1C7F2C0, v22, a3, v22);
          }
          else
          {
            v15 = 40 * v14;
            v16 = 40 * v14 + *(_QWORD *)a2;
            sub_3EBE30((__int64)v49, v11, a3);
            if ( v49[0] )
            {
              if ( *(_DWORD *)v16 )
              {
                if ( (*(_BYTE *)(v16 + 20) & 1) != 0 || *(_DWORD *)(v16 + 16) != 1 || (v51 & 1) != 0 || v50 != 1 )
                {
                  sub_1851D20(qword_1C7F2C0, v16, v49, v16);
                }
                else
                {
                  v48 = qword_1C7F2C0;
                  sub_1831A80(qword_1C7F2C0, v16, v49, v16);
                  sub_182CBA0(v48, v16 + 16);
                  *(_BYTE *)(v16 + 20) &= ~1u;
                  *(_DWORD *)(v16 + 16) = 1;
                }
              }
              else
              {
                sub_27B950((__int64)qword_1C7F2C0, v16, v49);
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, v16, (int *)v16);
            }
            v47 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v49);
            sub_182CBA0(v47, &v50);
            if ( !*(_DWORD *)v16 )
            {
              v17 = *(_DWORD *)(a2 + 16);
              v18 = *(_QWORD *)a2 + v15;
              *(_DWORD *)(v18 + 32) = -1;
              *(_DWORD *)(v18 + 36) = v17;
              --*(_DWORD *)(a2 + 8);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v13) = -1;
          }
        }
        v11 += 40;
      }
      while ( v11 != v45 );
      goto LABEL_23;
    }
  }
LABEL_24:
  if ( result )
  {
    for ( i = result + 40LL * *(unsigned int *)(result - 4); i != result; result += 40 )
    {
      v20 = *(unsigned int *)(result + 32);
      if ( (_DWORD)v20 != -1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v20) = -1;
    }
  }
  return result;
}

