void __fastcall sub_454F40(int a1, __int64 a2, _BYTE *a3)
{
  const void *v3; // rbx
  void **v4; // r12
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r15

  v3 = a3;
  v4 = (void **)(&xmmword_2CCB660 + 6 * a1 + 4);
  if ( a3
    && (*a3 || (v3 = (const void *)sub_5911C0(a2, 1)) != nullptr)
    && (v5 = strlen((const char *)v3), (v6 = v5) != 0) )
  {
    v7 = v5 + 1;
    if ( *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 4) < v5 + 1 )
      *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 2) = qvector_reserve(
                                                     v4,
                                                     *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 2),
                                                     v7,
                                                     1);
    *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 3) = v7;
    memmove(*v4, v3, v6);
    *((_BYTE *)*v4 + v6) = 0;
  }
  else
  {
    *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 3) = 0;
  }
}
