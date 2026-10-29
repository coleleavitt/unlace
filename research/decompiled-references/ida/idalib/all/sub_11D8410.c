const char *__fastcall sub_11D8410(__int64 a1, __int64 a2, __int64 *a3)
{
  const char *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD v11[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v12; // [rsp+20h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2568) + 560LL))(*(_QWORD *)(a1 + 2568));
  result = (const char *)sub_21B7850(a2, 3085, 3016, 1);
  if ( (_BYTE)result && *(_BYTE *)(a1 + 2392) )
  {
    v5 = *(_QWORD *)(a1 + 2496);
    v6 = *(_QWORD *)(a1 + 2504);
    v12 = 261;
    v11[0] = v5;
    v11[1] = v6;
    v7 = sub_10DA6C0(a2, (__int64)v11);
    v8 = *((unsigned int *)a3 + 2);
    v9 = v7;
    if ( v8 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      sub_2237220(a3, a3 + 2, v8 + 2, 8);
      v8 = *((unsigned int *)a3 + 2);
    }
    v10 = *a3;
    *(_QWORD *)(v10 + 8 * v8) = "-internal-isystem";
    *(_QWORD *)(v10 + 8 * v8 + 8) = v9;
    *((_DWORD *)a3 + 2) += 2;
    return "-internal-isystem";
  }
  return result;
}
