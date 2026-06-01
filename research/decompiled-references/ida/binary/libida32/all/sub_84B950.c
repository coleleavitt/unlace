__int64 __fastcall sub_84B950(unsigned int *a1, int a2, __int64 a3)
{
  double *v3; // rbp
  __int64 v4; // rax
  double *v5; // rdx
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = (double *)(a3 + 24);
  sub_847F60(a1, 32, 1, 0, 142, a2);
  sub_847C00(a1, 273, (__int64)sub_844000);
  sub_847F60(a1, 32, 2, 0, 1, 0);
  sub_84A700(a1, 0, 1, 0, 127, 0);
  v4 = *((_QWORD *)v3 - 1);
  v5 = (double *)(v4 + 8);
  v6 = v4 == 0;
  result = *a1;
  if ( !v6 )
    v3 = v5;
  if ( !(_DWORD)result )
  {
    v8 = *((_QWORD *)a1 + 10);
    v9 = *(_QWORD *)(v8 + 8);
    v10 = v9 + 16;
    if ( (unsigned __int64)(v9 + 16) > 0xFF0 )
    {
      result = (**((__int64 (__fastcall ***)(__int64, _QWORD))a1 + 7))(4096, *(_QWORD *)(*((_QWORD *)a1 + 7) + 16LL));
      if ( !result )
      {
        *a1 = 2;
        return result;
      }
      *(_QWORD *)result = *((_QWORD *)a1 + 10);
      *((_QWORD *)a1 + 10) = result;
      result += 16;
      *(_QWORD *)(result - 8) = 16;
      goto LABEL_7;
    }
    result = v8 + v9 + 16;
    *(_QWORD *)(v8 + 8) = v10;
    if ( result )
    {
LABEL_7:
      *(__m128 *)result = _mm_loadh_ps(v3);
      *(_QWORD *)v3 = result;
    }
  }
  return result;
}

