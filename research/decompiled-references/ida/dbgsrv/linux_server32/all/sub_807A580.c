/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A580
// Address: 0x0807A580

//----- (0807A580) --------------------------------------------------------
int __cdecl sub_807A580(int a1, char *s2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  void *v7; // edx
  int v8; // eax
  int v9; // eax
  int result; // eax
  int v11; // eax
  __int16 v12; // cx
  void **v13; // esi
  _BYTE *v14; // edx
  void *v15; // eax
  int v16; // eax
  __int16 v17; // si
  int (__cdecl ***v18)(_DWORD, char *); // eax
  unsigned int v19; // esi
  void **v20; // esi
  _BYTE *v21; // eax
  void *v22; // edx
  void **v23; // esi
  _BYTE *v24; // edx
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  int v28; // [esp+4h] [ebp-48h]
  int v29; // [esp+8h] [ebp-44h]
  unsigned int v30; // [esp+8h] [ebp-44h]
  int v31; // [esp+Ch] [ebp-40h]
  int v32; // [esp+18h] [ebp-34h]
  _DWORD *v33; // [esp+18h] [ebp-34h]
  char v34; // [esp+18h] [ebp-34h]
  __int16 v35; // [esp+1Ch] [ebp-30h]
  int v36; // [esp+28h] [ebp-24h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-20h]

  v37 = __readgsdword(0x14u);
  sub_8079A20((int *)a1, s2, &v36);
  if ( (unsigned int)v36 <= 3 )
  {
    if ( v36 )
    {
      result = sub_807A1C0(a1, s2, 0, 0);
      if ( result )
        goto LABEL_21;
      goto LABEL_35;
    }
LABEL_12:
    v11 = sub_80809D0(s2);
    if ( v11 )
    {
      if ( *(_BYTE *)(a1 + 244) || (*(_BYTE *)(v11 + 20) & 4) != 0 )
      {
        v12 = -21845 * ((v11 - dword_811D3A0[1]) >> 3);
        if ( (unsigned __int16)v12 <= 0xFu )
        {
          v13 = *(void ***)(a1 + 108);
          *(_BYTE *)(a1 + 116) = v12;
          v14 = v13[1];
          v15 = *v13;
          if ( v13[2] < v14 + 1 )
          {
            v34 = v12;
            v15 = sub_80CF920((int)v13, v15, (unsigned int)(v14 + 1), 1u);
            v14 = v13[1];
            LOBYTE(v12) = v34;
            *v13 = v15;
          }
          v14[(_DWORD)v15] = v12;
          result = 0;
          v13[1] = (char *)v13[1] + 1;
          ++*(_DWORD *)(a1 + 112);
        }
        else
        {
          sub_8078220(a1, 0, v12);
LABEL_18:
          result = 0;
        }
      }
      else
      {
        sub_80C7910(0, *(char **)v11);
        result = sub_80C7880(143);
      }
      goto LABEL_21;
    }
    v16 = sub_80806D0(*(int **)(a1 + 60), s2);
    v17 = v16;
    if ( v16 != -1 )
    {
      if ( (unsigned __int8)sub_807A4D0(*(_DWORD **)(a1 + 60), v16, a3) )
      {
        sub_8079210(a1, 0x10u, v17);
        result = 0;
      }
      else
      {
LABEL_11:
        sub_80C7910(0, s2);
        result = sub_80C7880(56);
      }
      goto LABEL_21;
    }
    v18 = *(int (__cdecl ****)(_DWORD, char *))(a1 + 224);
    if ( v18 && (v19 = (**v18)(v18, s2), v19 != -1) && (sub_80C3630() & 0x800) != 0 )
    {
      sub_80792A0(a1, v19);
    }
    else
    {
      sub_8078F10(a1, s2, 0);
      v20 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -82;
      v21 = v20[1];
      v22 = *v20;
      if ( v20[2] < v21 + 1 )
      {
        v27 = sub_80CF920((int)v20, v22, (unsigned int)(v21 + 1), 1u);
        *v20 = v27;
        v22 = v27;
        v21 = v20[1];
      }
      v21[(_DWORD)v22] = -82;
      v20[1] = (char *)v20[1] + 1;
      ++*(_DWORD *)(a1 + 112);
    }
LABEL_35:
    v23 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -92;
    v24 = v23[1];
    v25 = *v23;
    if ( v23[2] < v24 + 1 )
    {
      v25 = sub_80CF920((int)v23, v25, (unsigned int)(v24 + 1), 1u);
      v24 = v23[1];
      *v23 = v25;
    }
    v24[(_DWORD)v25] = -92;
    result = 0;
    v23[1] = (char *)v23[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    goto LABEL_21;
  }
  if ( v36 != 5 )
    goto LABEL_12;
  v3 = sub_8080DF0(*(_DWORD *)(a1 + 60), s2);
  v4 = (_DWORD *)v3;
  if ( !v3 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v37 == __readgsdword(0x14u) )
        sub_80CFF40(272, v28, v29, v31);
      sub_80D7AB0();
    }
    BUG();
  }
  v5 = *(_DWORD *)(v3 + 28);
  v6 = *(_DWORD **)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -16;
  v35 = v5;
  v7 = (void *)*v6;
  v32 = v6[1];
  if ( v6[2] < (unsigned int)(v32 + 1) )
  {
    v30 = v32 + 1;
    v33 = v6;
    v26 = sub_80CF920((int)v6, v7, v30, 1u);
    v6 = v33;
    v7 = v26;
    *v33 = v26;
    v32 = v33[1];
  }
  *((_BYTE *)v7 + v32) = -16;
  ++v6[1];
  ++*(_DWORD *)(a1 + 112);
  sub_8078190(a1, v35);
  while ( 1 )
  {
    v9 = sub_8084920(v4, (int)(v4 + 8));
    if ( v9 != -1 )
    {
      if ( (unsigned __int8)sub_807A4D0(*(_DWORD **)(a1 + 60), v9, a3 + 1) )
        goto LABEL_18;
      goto LABEL_11;
    }
    v8 = v4[6];
    if ( !v8 )
      break;
    v4 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 60) + 36) + 4 * v8);
  }
  if ( a3 )
    goto LABEL_11;
  result = 0;
LABEL_21:
  if ( v37 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 807A91B: variable 'v28' is possibly undefined
// 807A91B: variable 'v29' is possibly undefined
// 807A91B: variable 'v31' is possibly undefined
// 811D3A0: using guessed type int dword_811D3A0[3];
// 811F8A1: using guessed type char byte_811F8A1;
