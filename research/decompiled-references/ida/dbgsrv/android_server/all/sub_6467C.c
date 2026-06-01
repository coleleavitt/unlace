/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6467C
// Address: 0x000000000006467C

//----- (000000000006467C) ----------------------------------------------------
__int64 __fastcall sub_6467C(__int64 a1, char *a2)
{
  unsigned __int64 v4; // x0
  char v5; // w22
  unsigned int v6; // w0
  __int64 v7; // x20
  __int64 v8; // x9
  _BYTE *v9; // x0
  _BYTE *v10; // x8
  int v12; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = sub_62274((_QWORD *)a1, a2, &v12);
  v5 = -7;
  switch ( v12 )
  {
    case 0:
      v6 = 53;
      goto LABEL_11;
    case 1:
      goto LABEL_6;
    case 2:
      v5 = -8;
      goto LABEL_6;
    case 3:
      v5 = -6;
LABEL_6:
      sub_5EF88(a1, v4);
      v7 = *(_QWORD *)(a1 + 200);
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
      {
        v10 = *(_BYTE **)v7;
      }
      else
      {
        v9 = qvector_reserve(*(pthread_mutex_t **)(a1 + 200), *(void **)v7, v8 + 1, 1u);
        v8 = *(_QWORD *)(v7 + 8);
        v10 = v9;
        *(_QWORD *)v7 = v9;
      }
      v10[v8] = v5;
      ++*(_QWORD *)(v7 + 8);
      ++*(_DWORD *)(a1 + 208);
      return 0;
    case 6:
      v6 = 1565;
      goto LABEL_11;
    default:
      v6 = 1564;
LABEL_11:
      set_qerrno(v6);
      set_error_string(nullptr, a2);
      return set_qerrno(0x35u);
  }
}
