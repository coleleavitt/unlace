unsigned __int64 __fastcall sub_A71330(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // [rsp+Ch] [rbp-2Ch]

  v3 = 0;
  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)&byte_8[*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v5 & 8) != 0 )
  {
    v5 &= 0xFFFFFFFFFFFFFFF0LL;
    v3 = *(_QWORD *)(v5 + 24);
  }
  if ( (_DWORD)a3 == ((v3 >> 4) & 3) )
    return a2;
  v6 = *v4;
  if ( (*(_BYTE *)(*v4 + 16) == 42
     || (v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v9 + 16) == 42)
     && (v11 = a3, v6 = sub_F63050(*v4, a2, a3, v9, v5), LODWORD(a3) = v11, v6))
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL)
      & 0xF7) == 0x22 )
  {
    v7 = sub_A71330(a1);
    return sub_A70010(a1, v7);
  }
  else
  {
    v10 = a2 & 7;
    if ( (a2 & 8) != 0 )
    {
      v4 = (__int64 *)*v4;
      v10 = *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFCFLL | a2 & 7;
    }
    return sub_A70C40(a1, (__int64)v4, v10 | (16 * (int)a3));
  }
}
