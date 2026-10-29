__int64 __fastcall sub_86AD00(unsigned int *a1, double *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  result = *a1;
  if ( !(_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 10);
    v4 = *(_QWORD *)(v3 + 8);
    v5 = v4 + 16;
    if ( (unsigned __int64)(v4 + 16) <= 0xFF0 )
    {
      result = v3 + v4 + 16;
      *(_QWORD *)(v3 + 8) = v5;
      if ( result )
        goto LABEL_5;
    }
    else
    {
      result = (**((__int64 (__fastcall ***)(__int64, _QWORD))a1 + 7))(4096, *(_QWORD *)(*((_QWORD *)a1 + 7) + 16LL));
      if ( result )
      {
        *(_QWORD *)result = *((_QWORD *)a1 + 10);
        *((_QWORD *)a1 + 10) = result;
        result += 16;
        *(_QWORD *)(result - 8) = 16;
LABEL_5:
        *(__m128 *)result = _mm_loadh_ps(a2);
        *(_QWORD *)a2 = result;
        return result;
      }
      *a1 = 2;
    }
  }
  return result;
}
