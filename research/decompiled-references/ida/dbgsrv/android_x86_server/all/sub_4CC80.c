/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CC80
// Address: 0x0004CC80

//----- (0004CC80) --------------------------------------------------------
int __cdecl sub_4CC80(_DWORD *a1, char *s2)
{
  unsigned int v2; // eax
  char v3; // dl
  int v4; // edi
  int v5; // ecx
  _BYTE *v6; // eax
  char v8; // [esp+3h] [ebp-19h]
  int v9[6]; // [esp+4h] [ebp-18h] BYREF

  v9[1] = __readgsdword(0x14u);
  v2 = sub_4A890(a1, s2, v9);
  v3 = -7;
  switch ( v9[0] )
  {
    case 0:
      set_qerrno(53);
      goto LABEL_11;
    case 1:
      goto LABEL_6;
    case 2:
      v3 = -8;
      goto LABEL_6;
    case 3:
      v3 = -6;
LABEL_6:
      v8 = v3;
      sub_472F0((int)a1, v2);
      v4 = a1[27];
      v5 = *(_DWORD *)(v4 + 4);
      if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
      {
        v6 = *(_BYTE **)v4;
      }
      else
      {
        v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
        *(_DWORD *)v4 = v6;
        v5 = *(_DWORD *)(v4 + 4);
      }
      v6[v5] = v8;
      ++*(_DWORD *)(v4 + 4);
      ++a1[28];
      return 0;
    case 6:
      set_qerrno(1565);
      goto LABEL_11;
    default:
      set_qerrno(1564);
LABEL_11:
      set_error_string(0, s2);
      return set_qerrno(53);
  }
}
