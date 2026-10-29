unsigned __int64 __fastcall sub_1B06220(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // cf
  _BYTE *v19; // rax
  unsigned int v20; // ecx
  int v21; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v22[184]; // [rsp+10h] [rbp-B8h] BYREF

  v10 = a1[1];
  v11 = *(unsigned int *)(v10 + 344);
  if ( !(_DWORD)v11 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v10 + 336) + 6776 * v11 - 6776;
  if ( *(_QWORD *)(v12 + 6768) != *(_QWORD *)(v10 + 328) )
    goto LABEL_3;
  v15 = *(unsigned int *)(v12 + 8);
  v16 = *(unsigned int *)(v10 + 27504);
  if ( (unsigned int)v15 <= (unsigned int)v16 )
    goto LABEL_3;
  v18 = v15 == v16;
  v17 = v15 - v16;
  if ( v18 || v17 == 1 )
    goto LABEL_3;
  v19 = (_BYTE *)(*(_QWORD *)v12 + 1688 * (v17 - 2));
  if ( !v19 )
    goto LABEL_3;
  if ( v19[1104] )
  {
    v20 = 4576;
  }
  else
  {
    if ( !v19[1072] )
    {
      v19[1106] = 1;
LABEL_3:
      v13 = (_QWORD *)sub_168B6C0((__int64)a1);
      return sub_F00F90(v13, a4, a5, a2, a3, a6);
    }
    v20 = 4577;
  }
  sub_168B9F0((__int64)v22, a1, a4, v20, 0);
  v21 = 1;
  sub_1587D10((__int64)v22, &v21);
  sub_15F7200(v22);
  return 1;
}
