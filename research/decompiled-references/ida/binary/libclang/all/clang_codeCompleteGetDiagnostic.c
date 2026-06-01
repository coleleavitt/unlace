__int64 __fastcall clang_codeCompleteGetDiagnostic(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  void (__fastcall *v6)(_QWORD *); // rax

  if ( !a1 )
    return 0;
  if ( a2 >= *(_DWORD *)(a1 + 24) )
    return 0;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 864) + 8LL * a2);
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 16) + 104LL * a2;
    result = operator new(0x48u);
    *(_OWORD *)(result + 16) = 0;
    v4 = *(_QWORD *)(a1 + 864) + 8LL * a2;
    *(_BYTE *)(result + 40) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_DWORD *)(result + 48) = 0;
    *(_QWORD *)(result + 56) = v3;
    *(_QWORD *)(result + 64) = a1 + 960;
    *(__m128i *)result = _mm_unpacklo_epi64(
                           (__m128i)(unsigned __int64)&off_47D0298,
                           (__m128i)(unsigned __int64)&off_47CFF88);
    v5 = *(_QWORD **)v4;
    *(_QWORD *)v4 = result;
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
      if ( v6 == sub_629640 )
      {
        *v5 = &off_47D0298;
        sub_62FED0(v5);
        operator delete(v5, 0x48u);
      }
      else
      {
        v6(v5);
      }
      return *(_QWORD *)v4;
    }
  }
  return result;
}

