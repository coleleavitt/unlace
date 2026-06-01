/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A7320
// Address: 0x080A7320

//----- (080A7320) --------------------------------------------------------
_DWORD *__cdecl sub_80A7320(int a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // eax
  int *v3; // edx
  _BYTE *v4; // eax
  char *v5; // eax
  int i; // edi
  char *v7; // ecx
  void *v8; // eax
  void *v9; // eax
  _DWORD *v11; // eax
  size_t v12; // edi
  void *v13; // eax
  int *v14; // [esp+4h] [ebp-2218h]
  int v15; // [esp+8h] [ebp-2214h]
  char *v16; // [esp+Ch] [ebp-2210h]
  _DWORD *v17; // [esp+Ch] [ebp-2210h]
  char *s; // [esp+10h] [ebp-220Ch]
  char *sa; // [esp+10h] [ebp-220Ch]
  _WORD v20[8]; // [esp+20h] [ebp-21FCh] BYREF
  void *v21; // [esp+30h] [ebp-21ECh]
  int v22; // [esp+34h] [ebp-21E8h]
  void *v23; // [esp+58h] [ebp-21C4h]
  int v24; // [esp+5Ch] [ebp-21C0h]
  void *v25; // [esp+F4h] [ebp-2128h]
  int v26; // [esp+F8h] [ebp-2124h]
  void *ptr; // [esp+1E8h] [ebp-2034h]
  int v28; // [esp+1ECh] [ebp-2030h]
  int v29; // [esp+1F4h] [ebp-2028h]
  char dest[4096]; // [esp+200h] [ebp-201Ch] BYREF
  char v31[4096]; // [esp+1200h] [ebp-101Ch] BYREF
  unsigned int v32; // [esp+2200h] [ebp-1Ch]

  v32 = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1 + 68);
  v2 = (_DWORD *)*v1;
  if ( !*v1 || v2[1] != 1 )
  {
    sub_8058290();
    goto LABEL_30;
  }
  v3 = &dword_80DDFD8;
  if ( v2[3] )
    v3 = (int *)v2[2];
  v4 = (_BYTE *)v1[28];
  v16 = (char *)v3;
  if ( !v4 )
    goto LABEL_30;
  s = (char *)v1[28];
  if ( (unsigned __int8)sub_80CE7D0(v4) )
  {
    sub_80D0740((unsigned int)v31, s, 4096);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_80CE7D0(v16) )
  {
    if ( !sub_80CE860(v31, 4096, v16) || !(unsigned __int8)sub_80CE6B0(dest, 0x1000u, v31) )
      goto LABEL_30;
    goto LABEL_35;
  }
  if ( !(unsigned __int8)sub_80CE6B0(dest, 0x1000u, v16) )
  {
LABEL_30:
    v17 = nullptr;
    goto LABEL_31;
  }
LABEL_35:
  sub_80CE680(v31, 4096, dest, v1[28], 0);
LABEL_8:
  v14 = sub_80CD4D0((int)v31, 0);
  if ( !v14 )
  {
    sub_8058290();
    goto LABEL_30;
  }
  sub_806D700((int)v20, v14, 0);
  sub_8069F90((int)v20, nullptr);
  if ( (unsigned __int8)sub_8069FC0((int)v20)
    && (unsigned __int8)sub_806A5B0(v20)
    && (unsigned __int8)sub_806EF70((int)v20) )
  {
    v11 = (_DWORD *)operator new(0x14u);
    v11[1] = 1;
    *v11 = &off_811C1B0;
    v11[2] = 0;
    v17 = v11;
    v11[3] = 0;
    v11[4] = 0;
    v12 = strlen(v31);
    v13 = sub_80CF920((int)(v17 + 2), nullptr, v12 + 1, 1u);
    v17[2] = v13;
    v17[3] = v12 + 1;
    memmove(v13, v31, v12);
    *(_BYTE *)(v17[2] + v12) = 0;
  }
  else
  {
    sub_8058290();
    v17 = nullptr;
  }
  if ( v29 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v29 + 4))(v29);
  if ( ptr )
  {
    v28 = 0;
    sub_80CF780(ptr);
  }
  v5 = (char *)v25;
  if ( v25 )
  {
    if ( v26 )
    {
      v15 = v26;
      for ( i = 0; i != v15; ++i )
      {
        v7 = &v5[68 * i];
        v8 = *((void **)v7 + 3);
        sa = v7;
        if ( v8 )
        {
          *((_DWORD *)v7 + 4) = 0;
          sub_80CF780(v8);
        }
        v9 = *(void **)sa;
        if ( *(_DWORD *)sa )
        {
          *((_DWORD *)sa + 1) = 0;
          sub_80CF780(v9);
        }
        v5 = (char *)v25;
      }
    }
    v26 = 0;
    sub_80CF780(v5);
  }
  if ( v23 )
  {
    v24 = 0;
    sub_80CF780(v23);
  }
  if ( v21 )
  {
    v22 = 0;
    sub_80CF780(v21);
  }
  sub_80CD620(v14);
LABEL_31:
  if ( v32 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v17;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C1B0: using guessed type int (__cdecl *off_811C1B0)(int);
