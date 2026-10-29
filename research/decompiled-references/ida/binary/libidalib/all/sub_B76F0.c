__int64 __fastcall sub_B76F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = qword_252278;
  for ( qword_252278 = 0; v1; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2) )
  {
    v2 = v1;
    v1 = *(_QWORD *)(v1 + 8);
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, a1);
  }
  return result;
}

