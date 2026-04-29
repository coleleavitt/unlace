__int64 __fastcall sub_53700(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v3)(_QWORD, __int64, _QWORD); // rax
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rax

  v3 = (void (__fastcall *)(_QWORD, __int64, _QWORD))a1[3];
  if ( v3 )
    v3(a1[2], a2, a1[4]);
  v4 = (__int64 *)a1[1];
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(v4, v6, v5 + 1, 8);
    *v4 = v8;
    v6 = v8;
    v5 = v4[1];
  }
  *(_QWORD *)(v6 + 8 * v5) = a2;
  ++v4[1];
  return 0;
}
