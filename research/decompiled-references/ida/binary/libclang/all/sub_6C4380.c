unsigned __int64 __fastcall sub_6C4380(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v3 = a2 & 7;
  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)&byte_8[*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL];
  v8 = 0;
  if ( (v7 & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  if ( a3 == ((v8 >> 4) & 3) )
    return a2;
  v9 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(*(_QWORD *)v4 + 16LL) == 41
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 && (v9 = sub_B0D320(v9)) != 0)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL)
      & 0xF7) == 0x21 )
  {
    v10 = sub_6C4380(a1, *(_QWORD *)(v9 + 32), a3);
    return sub_6C4160((__int64)a1, v10);
  }
  else
  {
    if ( (a2 & 8) != 0 )
    {
      v4 = *(_QWORD *)v4;
      v3 = *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFCFLL | a2 & 7;
    }
    return sub_6C3980(a1, v4, v3 | (int)(16 * a3));
  }
}

