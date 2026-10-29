__int64 __fastcall sub_409310(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // r15d
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 (*v8)(void); // rdx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int i; // ebx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(); // rdx
  char v31; // dl
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(); // r9
  int v35; // [rsp+0h] [rbp-68h]
  int *v36; // [rsp+8h] [rbp-60h]
  int v37[2]; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+10h] [rbp-58h]
  int v39[2]; // [rsp+18h] [rbp-50h] BYREF
  int v40[2]; // [rsp+20h] [rbp-48h] BYREF
  char v41[8]; // [rsp+28h] [rbp-40h] BYREF
  int v42; // [rsp+30h] [rbp-38h]
  int v43; // [rsp+38h] [rbp-30h]
  int v44; // [rsp+40h] [rbp-28h]
  void *v45; // [rsp+48h] [rbp-20h]

  v3 = 0;
  v6 = 0;
  result = *(_QWORD *)(a1 + 696);
  if ( result )
  {
    while ( v6 < *(_DWORD *)(result - 4) )
    {
      v8 = *(__int64 (**)(void))(**(_QWORD **)(result + 8LL * v6) + 16LL);
      if ( v8 == sub_41C600 )
      {
        ++v6;
      }
      else
      {
        ++v6;
        v3 |= v8();
        result = *(_QWORD *)(a1 + 696);
        if ( !result )
          break;
      }
    }
    if ( (_BYTE)v3 )
    {
      if ( *(_DWORD *)(a3 + 96) > 0xFFFEu )
      {
        result = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.p3.share_invariants", *(_QWORD *)(a1 + 144) + 8LL, 0);
        if ( (_BYTE)result )
        {
LABEL_8:
          v11 = *(_QWORD *)(a1 + 152);
          v12 = a2[6];
          v13 = 0;
          *(_QWORD *)v40 = v11;
          if ( v12 )
          {
            v14 = 0;
            v36 = v39;
            while ( v14 < *(_DWORD *)(v12 - 4) )
            {
              v15 = sub_439010(*a2 + 8LL, *(_QWORD *)(v12 + 8LL * v14), 1, 0);
              v18 = sub_15DC610(
                      v11,
                      v15,
                      0,
                      0,
                      v16,
                      v17,
                      v35,
                      (int)v36,
                      v38,
                      v39[0],
                      v40[0],
                      v41[0],
                      v42,
                      v43,
                      v44,
                      v45);
              *(_QWORD *)v39 = v18;
              if ( v18 )
                ++*(_DWORD *)(v18 + 8);
              *(_QWORD *)v41 = v13;
              sub_407600((unsigned int **)v41, v36);
              v12 = a2[6];
              v13 = *(_QWORD *)v41;
              ++v14;
              v11 = *(_QWORD *)(a1 + 152);
              if ( !v12 )
                goto LABEL_14;
            }
            v19 = *(_DWORD *)(v12 - 4);
          }
          else
          {
LABEL_14:
            v19 = 0;
          }
          v20 = a2[3];
          sub_15DC610(v11, v20, v19, v13, v9, v10, v35, (int)v36, v38, v39[0], v40[0], v41[0], v42, v43, v44, v45);
          v21 = *(_QWORD *)(a1 + 152);
          sub_407990((_QWORD *)a3, v20, v22, v23, v24, v25);
          v26 = 0;
          *(_QWORD *)v37 = sub_15E1B70(v21);
          v27 = *(_QWORD *)(a1 + 696);
          for ( i = 0; v27; ++i )
          {
            if ( i >= *(_DWORD *)(v27 - 4) )
              break;
            v29 = *(_QWORD *)(v27 + 8LL * i);
            v30 = *(__int64 (__fastcall **)())(*(_QWORD *)v29 + 16LL);
            if ( v30 != sub_41C600 )
            {
              v31 = ((__int64 (__fastcall *)(__int64, __int64))v30)(v29, v26);
              v27 = *(_QWORD *)(a1 + 696);
              if ( v31 )
              {
                v33 = *(_QWORD *)(v27 + 8LL * i);
                v34 = *(__int64 (__fastcall **)())(*(_QWORD *)v33 + 24LL);
                if ( v34 != nullsub_209 )
                {
                  v26 = *(_QWORD *)v37;
                  ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64 (__fastcall *)()))v34)(
                    v33,
                    *(_QWORD *)v37,
                    *(unsigned int *)(a3 + 96),
                    v32,
                    nullsub_209);
                  v27 = *(_QWORD *)(a1 + 696);
                }
              }
            }
          }
          *(_QWORD *)v41 = v13;
          return sub_2334C0((__int64 *)v40);
        }
        if ( *(_DWORD *)(a3 + 96) > 0xFFFEu )
          return result;
      }
      result = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.p3.share_lemmas", *(_QWORD *)(a1 + 144) + 8LL, 0);
      if ( !(_BYTE)result )
        return result;
      goto LABEL_8;
    }
  }
  return result;
}

