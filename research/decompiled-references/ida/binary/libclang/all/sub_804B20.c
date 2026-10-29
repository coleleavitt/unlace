__int64 __fastcall sub_804B20(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *(_QWORD *)(sub_804930(a1) + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v2 = *(_QWORD *)v1;
  if ( *(_BYTE *)(*(_QWORD *)v1 + 16LL) == 41 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
  {
    v2 = sub_B0D320(v2);
    if ( v2 )
    {
LABEL_2:
      v2 = *(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_3;
    }
    v2 = *(_QWORD *)v1;
  }
LABEL_3:
  if ( (*(_BYTE *)(v2 + 17) & 4) != 0 )
    return 0;
  else
    return sub_B14A40(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
}

