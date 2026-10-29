size_t __fastcall sub_1EC2910(size_t *a1, __int64 a2, __int64 a3)
{
  size_t result; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // r12
  unsigned __int64 v8; // rdx
  size_t v9; // rsi
  void *v10; // r13
  size_t v11; // rbx
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 *v18; // r15
  char *v19; // rcx
  size_t v20; // rax
  char v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 *v27; // rcx
  __int64 v28; // r15
  unsigned int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // eax
  __int64 *v33; // rax
  char v34; // dl
  __int64 v35; // rbx
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // [rsp+8h] [rbp-98h]
  unsigned int v39; // [rsp+18h] [rbp-88h]
  __int64 *v40; // [rsp+18h] [rbp-88h]
  __int64 *v41; // [rsp+20h] [rbp-80h]
  __int64 *v42; // [rsp+40h] [rbp-60h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-50h]
  char *v45; // [rsp+58h] [rbp-48h] BYREF
  size_t v46; // [rsp+60h] [rbp-40h]

  result = *a1;
  v4 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( (_DWORD)v4 )
  {
    v6 = 0;
    v38 = 8 * (5LL * (unsigned int)(v4 - 1) + 5);
    while ( 1 )
    {
      v20 = v6 + result;
      v21 = *(_BYTE *)(v20 + 32);
      src = *(void **)v20;
      v22 = *(_QWORD *)(v20 + 8);
      LOBYTE(v45) = 61;
      v44 = v22;
      v23 = sub_2246AB0(&src, &v45, 1, 0);
      if ( v23 == -1 )
      {
        v10 = src;
        v11 = v44;
        v45 = nullptr;
        v46 = 0;
        if ( !v21 )
          goto LABEL_19;
      }
      else
      {
        v8 = v23 + 1;
        if ( v23 + 1 > v44 )
        {
          v8 = v44;
          v9 = 0;
        }
        else
        {
          v9 = v44 - v8;
        }
        v10 = src;
        v11 = v44;
        v46 = v9;
        if ( v23 <= v44 )
          v11 = v23;
        v45 = (char *)src + v8;
        if ( !v21 )
        {
          if ( v23 >= v44 )
          {
LABEL_19:
            v24 = j__strlen("1");
            v45 = "1";
            v46 = v24;
          }
          else
          {
            v12 = j__strlen("\n\r");
            v13 = sub_2246EC0(&v45, "\n\r", v12, 0);
            if ( v46 <= v13 )
              v13 = v46;
            v46 = v13;
          }
          v14 = sub_2244B30(v10, v11);
          v15 = (unsigned int)sub_2244CB0(a2, v10, v11, v14);
          v17 = (__int64 *)(*(_QWORD *)a2 + 8 * v15);
          if ( *v17 )
          {
            if ( *v17 != -8 )
            {
              sub_1EC27E0(&v42, v17, 0);
              v18 = v42;
              goto LABEL_15;
            }
            --*(_DWORD *)(a2 + 16);
          }
          v41 = v17;
          v39 = v15;
          v25 = sub_22300B0(v11 + 33, 8, v15, v17, v15, v16);
          v26 = v39;
          v27 = v41;
          v28 = v25;
          if ( v11 )
          {
            memcpy((void *)(v25 + 32), v10, v11);
            v27 = v41;
            v26 = v39;
          }
          *(_BYTE *)(v28 + v11 + 32) = 0;
          *(_QWORD *)v28 = v11;
          *(_QWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = 0;
          *(_BYTE *)(v28 + 24) = 0;
          *v27 = v28;
          ++*(_DWORD *)(a2 + 12);
          v29 = sub_22450D0(a2, v26);
          sub_1EC27E0(&v42, (__int64 *)(*(_QWORD *)a2 + 8LL * v29), 0);
          v18 = v42;
          if ( a3 )
          {
            v30 = *(unsigned int *)(a3 + 8);
            if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              sub_2237220(a3, a3 + 16, v30 + 1, 16);
              v30 = *(unsigned int *)(a3 + 8);
            }
            v31 = (_QWORD *)(*(_QWORD *)a3 + 16 * v30);
            *v31 = v10;
            v31[1] = v11;
            ++*(_DWORD *)(a3 + 8);
          }
LABEL_15:
          result = *v18;
          v6 += 40;
          v19 = v45;
          *(_QWORD *)(result + 16) = v46;
          *(_QWORD *)(result + 8) = v19;
          *(_BYTE *)(result + 24) = 0;
          if ( v38 == v6 )
            return result;
          goto LABEL_16;
        }
      }
      v32 = sub_2244B30(v10, v11);
      v33 = sub_1EC2820(a2, v10, v11, v32);
      if ( a3 && v34 )
      {
        v36 = *(unsigned int *)(a3 + 8);
        if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v40 = v33;
          sub_2237220(a3, a3 + 16, v36 + 1, 16);
          v36 = *(unsigned int *)(a3 + 8);
          v33 = v40;
        }
        v37 = (_QWORD *)(*(_QWORD *)a3 + 16 * v36);
        *v37 = v10;
        v37[1] = v11;
        ++*(_DWORD *)(a3 + 8);
      }
      v35 = *v33;
      v6 += 40;
      result = j__strlen(&byte_22F0C30);
      *(_QWORD *)(v35 + 8) = &byte_22F0C30;
      *(_QWORD *)(v35 + 16) = result;
      *(_BYTE *)(v35 + 24) = 1;
      if ( v38 == v6 )
        return result;
LABEL_16:
      result = *a1;
    }
  }
  return result;
}
