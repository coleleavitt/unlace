/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_712E0
// Address: 0x000712E0

//----- (000712E0) --------------------------------------------------------
unsigned int __cdecl sub_712E0(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int (__cdecl *v4)(int, _DWORD, int, _DWORD *); // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int qerrno; // eax
  int (__cdecl *v12)(int, int, int); // ecx
  _DWORD v14[6]; // [esp+4h] [ebp-18h] BYREF

  v14[1] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 228);
  switch ( (unsigned __int16)*(_DWORD *)(v2 + 12) )
  {
    case 2u:
      v4 = *(int (__cdecl **)(int, _DWORD, int, _DWORD *))(a1 + 72);
      if ( v4 )
        goto LABEL_6;
      if ( *(_DWORD *)(a1 + 76) )
      {
LABEL_18:
        v12 = *(int (__cdecl **)(int, int, int))(a1 + 76);
        if ( v12 )
        {
          *(_BYTE *)(a1 + 236) = 0;
          *(_DWORD *)(a1 + 240) = 0;
          if ( !v12(a1, a1 + 236, v2) )
            goto LABEL_20;
        }
        goto LABEL_23;
      }
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      break;
    case 3u:
    case 5u:
      v3 = *(_DWORD *)(v2 + 16);
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 20);
      *(_QWORD *)(a2 + 4) = v3;
      break;
    case 8u:
      v6 = *(_DWORD *)(v2 + 24);
      v7 = *(_DWORD *)(v2 + 28);
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 20);
      *(_DWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 4) = v6;
      break;
    case 0x28u:
      sub_70D60(a1, a2);
      return __readgsdword(0x14u);
    default:
      v4 = *(int (__cdecl **)(int, _DWORD, int, _DWORD *))(a1 + 72);
      if ( !v4 )
        goto LABEL_18;
LABEL_6:
      v5 = v4(a1, *(_DWORD *)(a1 + 100), v2, v14);
      if ( v5 )
      {
        if ( v5 == 34 )
        {
LABEL_20:
          *(_BYTE *)(a1 + 232) = 1;
          *(_BYTE *)a2 = 1;
          *(_DWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 4) = 0;
          return __readgsdword(0x14u);
        }
LABEL_23:
        sub_70D30(a1);
      }
      v8 = v14[0];
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 4) = v8;
      break;
  }
  v9 = *(_DWORD *)(a1 + 228);
  v10 = sub_6EB10(a1, v9, 0, nullptr);
  if ( !v10 && *(_DWORD *)(a1 + 32) )
    v10 = sub_6FBF0(a1, v9);
  if ( v10 )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
  }
  return __readgsdword(0x14u);
}
