_QWORD *__fastcall sub_1AE7860(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  signed __int64 v6; // rdx
  __int64 v7; // rbp
  bool v8; // zf
  __int64 v9; // rax

  v4 = *a2;
  v5 = *a3;
  v6 = 0xC0E8F2A76E68575BLL * ((*a2 - *a3) >> 3);
  v7 = v6 >> 2;
  if ( v6 >> 2 > 0 )
  {
    while ( 1 )
    {
      v8 = sub_FFE8A0(*(_DWORD *)(v4 - 712)) == 0;
      v9 = *a2;
      if ( !v8 )
        goto LABEL_8;
      *a2 = v9 - 1688;
      v8 = sub_FFE8A0(*(_DWORD *)(v9 - 2400)) == 0;
      v9 = *a2;
      if ( !v8 )
        goto LABEL_8;
      *a2 = v9 - 1688;
      v8 = sub_FFE8A0(*(_DWORD *)(v9 - 2400)) == 0;
      v9 = *a2;
      if ( !v8 )
        goto LABEL_8;
      *a2 = v9 - 1688;
      v8 = sub_FFE8A0(*(_DWORD *)(v9 - 2400)) == 0;
      v9 = *a2;
      if ( !v8 )
        goto LABEL_8;
      v4 = v9 - 1688;
      *a2 = v4;
      if ( !--v7 )
      {
        v5 = *a3;
        v6 = 0xC0E8F2A76E68575BLL * ((v4 - *a3) >> 3);
        break;
      }
    }
  }
  if ( v6 == 2 )
  {
LABEL_17:
    v8 = sub_FFE8A0(*(_DWORD *)(v4 - 712)) == 0;
    v9 = *a2;
    if ( !v8 )
      goto LABEL_8;
    v4 = v9 - 1688;
    *a2 = v4;
    goto LABEL_19;
  }
  if ( v6 == 3 )
  {
    v8 = sub_FFE8A0(*(_DWORD *)(v4 - 712)) == 0;
    v9 = *a2;
    if ( !v8 )
      goto LABEL_8;
    v4 = v9 - 1688;
    *a2 = v4;
    goto LABEL_17;
  }
  if ( v6 != 1 )
  {
LABEL_14:
    *a1 = v5;
    return a1;
  }
LABEL_19:
  if ( !sub_FFE8A0(*(_DWORD *)(v4 - 712)) )
  {
    *a2 -= 1688;
    v5 = *a3;
    goto LABEL_14;
  }
  v9 = *a2;
LABEL_8:
  *a1 = v9;
  return a1;
}
