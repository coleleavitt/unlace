_BOOL8 __fastcall sub_C716A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // rax

  v2 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v4 = *(_QWORD *)(*(_QWORD *)(sub_B73220(v2) + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(unsigned __int8 *)(v4 + 16);
  if ( (unsigned int)(v5 - 25) > 1 )
  {
    v7 = sub_F3F310(v4, a2, v5, v3);
    v4 = v7;
    if ( *(_BYTE *)(v7 + 16) == 26 )
      goto LABEL_7;
  }
  else if ( (_BYTE)v5 == 26 )
  {
    return (*(_BYTE *)(v4 + 18) & 0x20) == 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    return 1;
  v7 = sub_F3F310(v4, a2, v5, v3);
LABEL_7:
  if ( v7 )
    return (*(_BYTE *)(v4 + 18) & 0x20) == 0;
  return 1;
}

