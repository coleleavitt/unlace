/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471EFD
// Address: 0x00471EFD

//----- (00471EFD) --------------------------------------------------------
_BYTE *__usercall sub_471EFD@<eax>(char *a1@<ebx>, __m128i *a2, __m128i *a3)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  __int8 *v8; // eax
  unsigned int v9; // kr00_4
  _BYTE *v10; // eax
  char *v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  v3 = (int)a3;
  if ( !a3 )
  {
    v3 = (int)a2;
    v8 = sub_464F10(a2->m128i_i8, 0x3Du);
    if ( !v8 || v8 - (__int8 *)a2 < 0x7FFF && (unsigned int)sub_479836((__m128i *)(v8 + 1), 0x7FFFu) < 0x7FFF )
    {
      v9 = strlen(a2->m128i_i8);
      v10 = sub_4791B9(v9 + 1, 1u);
      v7 = v10;
      if ( v10 )
      {
        sub_46C78C(v9 + 1, (int)a2, v10, v9 + 1, (int)a2);
        goto LABEL_13;
      }
      goto LABEL_11;
    }
LABEL_3:
    *sub_46B984() = 22;
    sub_467EF4((int)a1, v3);
    return nullptr;
  }
  a1 = sub_479836(a2, 0x7FFFu);
  v4 = sub_479836(a3, 0x7FFFu);
  v11 = v4;
  if ( (unsigned int)a1 >= 0x7FFF || (unsigned int)v4 >= 0x7FFF )
    goto LABEL_3;
  v12 = (unsigned int)&v4[(_DWORD)a1 + 2];
  v6 = sub_4791B9(v12, 1u);
  v7 = v6;
  if ( !v6 )
  {
LABEL_11:
    v7 = nullptr;
    goto LABEL_13;
  }
  sub_46C78C((int)a1, (int)a3, v6, v12, (int)a2);
  a1[(_DWORD)v7] = 61;
  sub_46C78C((int)a1, (int)a3, &a1[(_DWORD)v7 + 1], (int)(v11 + 1), (int)a3);
LABEL_13:
  sub_479216(nullptr);
  return v7;
}
