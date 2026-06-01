__int64 __fastcall sub_6DDB80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax

  v3 = 1;
  if ( (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7) != (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]
                                                                  | a3 & 7) )
  {
    v4 = sub_6DDAF0(a1, a3);
    v5 = sub_6DDAF0(a1, a2);
    v3 = v5 & 0xFFFFFFF0;
    LOBYTE(v3) = (*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] | v5 & 7) == (*(_QWORD *)&byte_8[v4
                                                                                               & 0xFFFFFFFFFFFFFFF0LL]
                                                                            | v4 & 7);
  }
  return v3;
}

