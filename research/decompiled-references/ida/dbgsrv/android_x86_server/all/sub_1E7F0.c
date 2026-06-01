/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E7F0
// Address: 0x0001E7F0

//----- (0001E7F0) --------------------------------------------------------
char __cdecl sub_1E7F0(int *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  const char *v5; // ecx
  char result; // al
  int v7[7]; // [esp+0h] [ebp-1Ch] BYREF

  v7[2] = __readgsdword(0x14u);
  v3 = sub_19CE0(a1[116], a2, v7);
  switch ( v3 )
  {
    case 0:
      v4 = v7[0];
      if ( sub_21300((int)a1, -1, v7[0], (unsigned int *)(a3 + 4), 1u, 0) != 1
        || !(*(int (__cdecl **)(int *, _DWORD, int, int, int))(*a1 + 156))(a1, 0, 4, v4, -1) )
      {
        sub_1C9D0((int)a1, "%a: failed to add thread_db breakpoint\n", v7[0]);
        goto LABEL_9;
      }
      *(_DWORD *)a3 = v4;
      *(_BYTE *)(a3 + 5) = 1;
      v5 = "TD_DEATH";
      if ( !a2 )
        v5 = "TD_CREATE";
      sub_8A3F0((int)a1, "%a: added BP for thread event %s\n", v4, v5);
      result = 1;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      goto LABEL_8;
    default:
      qsnprintf(dword_13BCE0, 64, "tdb error %d", v3);
LABEL_8:
      sub_1C900();
LABEL_9:
      result = 0;
      break;
  }
  return result;
}
// 13BCE0: using guessed type int dword_13BCE0[10];
