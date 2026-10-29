bool is_trusted_idb()
{
  __int64 v0; // rdi

  v0 = *(_QWORD *)(qword_2CCB598 + 1832);
  return !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v0 + 1672LL) + 448LL) || (unsigned int)sub_697B40(v0) == 1;
}
