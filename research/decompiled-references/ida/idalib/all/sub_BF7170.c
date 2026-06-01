__int64 __fastcall sub_BF7170(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax

  v4 = (__int64 *)(*(_QWORD *)(sub_BF6F80(a1) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v4;
  if ( *(_BYTE *)(*v4 + 16) == 42 )
    goto LABEL_2;
  v2 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) == 42 )
  {
    v6 = sub_F63050(*v4, a2, v2, v3);
    if ( v6 )
    {
LABEL_2:
      v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_3;
    }
    v6 = *v4;
  }
LABEL_3:
  if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
    return 0;
  else
    return sub_F60F10(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v2, v3, v5);
}
