/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432500
// Address: 0x00432500

//----- (00432500) --------------------------------------------------------
int __userpurge sub_432500@<eax>(int this@<ecx>, void **ebx0@<ebx>, __m128i a3@<xmm0>, int a2)
{
  int v5; // ecx
  __int64 v6; // rax
  char v7; // cl
  int v8; // esi
  int v9; // eax
  int result; // eax
  int v12; // eax
  void **v13; // ebx
  int v14; // esi
  int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  int v19; // esi
  bool v20; // cf
  int v21; // ecx
  int (__cdecl *v22)(int, _DWORD, int, __int64 *); // eax
  int v23; // eax
  int v24; // esi
  int (__cdecl *v25)(int, int, _DWORD); // ecx
  int v26; // eax
  int v27; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]
  __int64 v29; // [esp+18h] [ebp-8h] BYREF
  int v30; // [esp+24h] [ebp+4h]

  v5 = *(_DWORD *)(this + 264);
  switch ( *(_WORD *)(v5 + 12) )
  {
    case 2:
      if ( *(_DWORD *)(this + 84) || *(_DWORD *)(this + 88) )
        goto LABEL_19;
      a3 = 0;
      v7 = 1;
      v29 = 0;
      HIDWORD(v6) = 0;
      v8 = 0;
      goto LABEL_23;
    case 3:
    case 5:
      LODWORD(v6) = *(_DWORD *)(v5 + 16);
      v7 = *(_BYTE *)(v5 + 20);
      goto LABEL_22;
    case 8:
      v8 = *(_DWORD *)(v5 + 24);
      HIDWORD(v6) = *(_DWORD *)(v5 + 28);
      v7 = *(_BYTE *)(v5 + 20);
      goto LABEL_23;
    case 0x28:
      v9 = *(_DWORD *)(this + 192) + 1;
      *(_DWORD *)(this + 192) = v9;
      if ( v9 >= 1024 )
      {
        sub_46653B((int *)(this + 200), 54);
        goto LABEL_34;
      }
      sub_432F50((int *)this, ebx0, a2, 1);
      if ( *(_WORD *)(*(_DWORD *)(this + 264) + 12) != 41 )
        goto LABEL_35;
      result = sub_432F00((int *)this, ebx0, a3);
      if ( *(_BYTE *)(this + 268) )
      {
        v12 = *(_DWORD *)(this + 272);
        v13 = *(void ***)(this + 276);
        *(_BYTE *)(this + 268) = 0;
        v28 = v12;
        LODWORD(v29) = v13;
        sub_4327A0((int *)this, a3, v13, a2, 0);
        v14 = 8 * (8 - (_DWORD)v13);
        v17 = sub_463600(0xFFFFFFFFFFFFFFFFuLL, 8 * (8 - (unsigned __int8)v13));
        v15 = v17;
        v16 = 63 - v14;
        LODWORD(v17) = 0;
        v18 = 1 << (63 - v14);
        if ( v16 >= 0x20 )
          LODWORD(v17) = v18;
        v19 = v17 ^ v18;
        v20 = v16 < 0x40;
        v21 = *(_DWORD *)(a2 + 12);
        if ( !v20 )
          LODWORD(v17) = v19;
        v27 = v17;
        LODWORD(v17) = *(_DWORD *)(a2 + 8) & v15;
        v30 = HIDWORD(v17) & v21;
        *(_DWORD *)(a2 + 12) = HIDWORD(v17) & v21;
        *(_DWORD *)(a2 + 8) = v17;
        *(_BYTE *)a2 = v28;
        if ( !(_BYTE)v28 && v27 & v30 | v19 & (unsigned int)v17 )
        {
          *(_DWORD *)(a2 + 8) = v19 | v17 | ~v15;
          *(_DWORD *)(a2 + 12) = v27 | v30 | ~HIDWORD(v17);
        }
        *(_DWORD *)(this + 272) = v28;
        result = v29;
        *(_DWORD *)(this + 276) = v29;
      }
      --*(_DWORD *)(this + 192);
      return result;
    default:
LABEL_19:
      v22 = *(int (__cdecl **)(int, _DWORD, int, __int64 *))(this + 84);
      if ( v22 )
      {
        v23 = v22(this, *(_DWORD *)(this + 112), v5, &v29);
        if ( !v23 )
        {
          LODWORD(v6) = v29;
          v7 = 0;
LABEL_22:
          v6 = (int)v6;
          v8 = v6;
LABEL_23:
          *(_BYTE *)a2 = v7;
          *(_DWORD *)(a2 + 8) = v8;
          *(_DWORD *)(a2 + 12) = HIDWORD(v6);
          v24 = *(_DWORD *)(this + 264);
          result = sub_4360F0(this, ebx0, a3, v24, 0, nullptr);
          if ( *(_DWORD *)(this + 32) )
          {
            if ( result )
            {
LABEL_34:
              v26 = sub_45C9E0();
              sub_46653B((int *)(this + 200), v26);
              goto LABEL_35;
            }
            result = sub_4345C0((const CHAR **)this, ebx0, v24);
          }
          if ( !result )
            return result;
          goto LABEL_34;
        }
        if ( v23 != 34 )
          goto LABEL_35;
      }
      else
      {
        v25 = *(int (__cdecl **)(int, int, _DWORD))(this + 88);
        if ( !v25
          || (*(_BYTE *)(this + 272) = 0, *(_DWORD *)(this + 276) = 0, v25(this, this + 272, *(_DWORD *)(this + 264))) )
        {
LABEL_35:
          sub_432F40((int *)this);
        }
      }
      *(_BYTE *)(this + 268) = 1;
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
      return a2;
  }
}
