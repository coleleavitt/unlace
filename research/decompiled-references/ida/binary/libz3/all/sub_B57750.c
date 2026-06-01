__int64 __fastcall sub_B57750(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        void *a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16,
        int a17,
        int a18,
        int a19,
        int a20,
        char a21)
{
  __int64 result; // rax
  __int64 *v22; // rbx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned int *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // r12d
  __int64 v33; // r15
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36[8]; // [rsp+0h] [rbp-40h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( result )
  {
    v22 = *a1;
    v23 = *(_DWORD *)result;
    v24 = (*a1)[1];
    if ( *(_DWORD *)(v24 + 8) == *(_DWORD *)result )
    {
      result = *(unsigned int *)(result + 4);
      if ( (_DWORD)result == 11 )
      {
        return sub_B5C700(
                 (int)*a1,
                 a2,
                 v24,
                 v23,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21);
      }
      else if ( (_DWORD)result == 12 )
      {
        v25 = *v22;
        v26 = sub_15E1B70(v22[5]);
        v27 = *v22;
        v28 = (unsigned int *)v26;
        if ( v26 )
          *(_DWORD *)(v26 + 8) += 2;
        v29 = *(_QWORD *)(v22[1] + 16);
        v30 = *(_QWORD *)(v29 + 8656);
        if ( !v30 || (v31 = *v28, (unsigned int)v31 >= *(_DWORD *)(v30 - 4)) || !*(_QWORD *)(v30 + 8 * v31) )
        {
          sub_B6F780(v29);
          v29 = *(_QWORD *)(v22[1] + 16);
        }
        v32 = sub_B645B0(v29, v28);
        v33 = *(_QWORD *)(v22[1] + 16);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v33 + 7488) + 48LL))(
          *(_QWORD *)(v33 + 7488),
          *(_QWORD *)(*(_QWORD *)(v33 + 8840) + 8LL * (v32 >> 1)));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 7488) + 64LL))(*(_QWORD *)(v33 + 7488));
        v34 = v28[2]-- == 1;
        if ( v34 )
          sub_15D7BC0(v27, v28);
        v36[0] = 2;
        v35 = *(_QWORD *)(v22[1] + 16);
        result = *(unsigned __int8 *)(*(_QWORD *)(v35 + 8848) + v32);
        if ( (_BYTE)result == 0xFF )
        {
          result = sub_8E8670(v35, v36, v32 ^ 1);
        }
        else if ( !(_BYTE)result )
        {
          result = (__int64)sub_8F28B0(v35, v32, 2, 0);
        }
        v34 = v28[2]-- == 1;
        if ( v34 )
          return sub_15D7BC0(v25, v28);
      }
    }
  }
  return result;
}

