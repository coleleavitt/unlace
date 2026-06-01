char *__fastcall sub_7B5740(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v2 = swap64(*(_QWORD *)(*(_QWORD *)*a2 + 4LL));
  v3 = swap64(*(_QWORD *)(*(_QWORD *)(*a2 + 48LL * a2[1] - 48) + 4LL));
  v4 = v3 + 1;
  if ( v3 >= v2 )
    v3 = v2;
  else
    v4 = v2 + 1;
  return sub_7B5570(a1, v3, v4);
}
