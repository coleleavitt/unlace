__int64 __fastcall sub_F0AE70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  int v4; // ebp
  size_t v5; // rax
  __int64 v6; // rbp
  const void *v7; // rax
  size_t v8; // rdx
  __int64 v10; // rax

  v3 = *(unsigned __int16 *)(a2 + 20);
  v2 = *(_QWORD *)(a1 + 1096);
  LOWORD(v3) = (unsigned __int16)v3 >> 2;
  if ( (v3 & 0x40) == 0 )
  {
    if ( (v3 & 0x80u) == 0 )
      goto LABEL_3;
LABEL_6:
    sub_971800(v2, " produces_result");
    v2 = *(_QWORD *)(a1 + 1096);
    v4 = (v3 >> 9) & 7;
    if ( !v4 )
      goto LABEL_4;
LABEL_7:
    v10 = sub_971800(v2, " regparm ");
    sub_2257BD0(v10, (unsigned int)(v4 - 1));
    v2 = *(_QWORD *)(a1 + 1096);
    goto LABEL_4;
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " noreturn");
  v2 = *(_QWORD *)(a1 + 1096);
  if ( (v3 & 0x80u) != 0 )
    goto LABEL_6;
LABEL_3:
  v4 = (v3 >> 9) & 7;
  if ( v4 )
    goto LABEL_7;
LABEL_4:
  v5 = j__strlen(" ");
  v6 = sub_9717A0(v2, " ", v5);
  v7 = (const void *)sub_F38690(v3 & 0x3F);
  return sub_9717A0(v6, v7, v8);
}

