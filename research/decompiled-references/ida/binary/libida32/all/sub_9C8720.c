_QWORD *__fastcall sub_9C8720(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int16 *v8; // rax
  __int16 v9; // dx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 47 )
  {
    v11 = sub_F3D1D0(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
            a2,
            a3,
            a4,
            a5);
    if ( (*(_BYTE *)(v11 + 74) & 1) != 0 || (*(_QWORD *)(v11 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      sub_F3D1D0(v7, a2, v12, v13, v14);
  }
  v8 = (__int16 *)sub_BD7B00();
  v9 = *v8;
  *a1 = a1 + 2;
  if ( (v9 & 0x1FF) == 0x47 )
  {
    a1[2] = v8;
    a1[1] = 0x100000001LL;
  }
  else
  {
    a1[1] = 0x100000000LL;
  }
  return a1;
}

