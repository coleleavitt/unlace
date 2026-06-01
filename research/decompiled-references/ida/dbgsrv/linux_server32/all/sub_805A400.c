/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805A400
// Address: 0x0805A400

//----- (0805A400) --------------------------------------------------------
int __cdecl sub_805A400(__int64 ***a1)
{
  __int64 **v1; // edi
  __int64 **v2; // edi
  int v3; // edx
  void *v4; // eax
  unsigned int v5; // edi
  char *v6; // eax
  __int64 **v7; // edi
  char *v8; // ecx
  char *v9; // edx
  char *v10; // eax
  __int64 *v11; // eax
  int result; // eax
  char *v13; // eax
  __int64 **v14; // eax
  __int64 *v15; // eax
  __int64 **v16; // eax
  __int64 *v17; // eax
  __int64 **i; // esi
  __int64 **v19; // ecx
  char *v20; // eax
  __int64 *v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  __int64 **v24; // edx
  int v25; // ecx
  size_t v26; // edi
  void *v27; // eax
  int v28; // ebx
  int *v29; // [esp+0h] [ebp-105Ch]
  int v30; // [esp+4h] [ebp-1058h]
  int v31; // [esp+Ch] [ebp-1050h]
  int v32; // [esp+14h] [ebp-1048h]
  void *v33; // [esp+18h] [ebp-1044h]
  char *v34; // [esp+18h] [ebp-1044h]
  int *v35; // [esp+18h] [ebp-1044h]
  int *v36; // [esp+18h] [ebp-1044h]
  __int64 **v37; // [esp+18h] [ebp-1044h]
  unsigned int v38; // [esp+1Ch] [ebp-1040h]
  int v39; // [esp+1Ch] [ebp-1040h]
  int v40; // [esp+1Ch] [ebp-1040h]
  int v41; // [esp+1Ch] [ebp-1040h]
  char *v42; // [esp+1Ch] [ebp-1040h]
  int v43; // [esp+1Ch] [ebp-1040h]
  int v44; // [esp+1Ch] [ebp-1040h]
  int v45; // [esp+1Ch] [ebp-1040h]
  void *v46; // [esp+24h] [ebp-1038h] BYREF
  int v47; // [esp+28h] [ebp-1034h]
  int v48; // [esp+2Ch] [ebp-1030h]
  void *ptr; // [esp+34h] [ebp-1028h] BYREF
  unsigned int v50; // [esp+38h] [ebp-1024h]
  unsigned int v51; // [esp+3Ch] [ebp-1020h]
  char dest[4096]; // [esp+40h] [ebp-101Ch] BYREF
  unsigned int v53; // [esp+1040h] [ebp-1Ch]

  v53 = __readgsdword(0x14u);
  if ( !a1[258] || (unsigned int)a1[267] <= 3 )
    goto LABEL_28;
  v1 = a1[266];
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v46 = sub_80CF920((int)&v46, nullptr, 3u, 1u);
  v47 = 3;
  *(_WORD *)v46 = *(_WORD *)v1;
  *((_BYTE *)v46 + 2) = 0;
  v2 = a1[267];
  if ( !v2 )
  {
    ptr = nullptr;
    v50 = 0;
    v51 = 0;
LABEL_5:
    v3 = 6;
    v4 = nullptr;
    v5 = 7;
    v38 = 0;
LABEL_6:
    v33 = (void *)v3;
    v4 = sub_80CF920((int)&ptr, v4, v5, 1u);
    ptr = v4;
    v3 = (int)v33;
    goto LABEL_7;
  }
  v22 = (unsigned int)v2 - 1;
  v23 = 2;
  ptr = nullptr;
  v24 = a1[266];
  v50 = 0;
  v51 = 0;
  if ( v22 <= 2 )
    v23 = v22;
  v25 = v23;
  v26 = v22 - v23;
  if ( !v26 )
    goto LABEL_5;
  v27 = nullptr;
  if ( v26 != -1 )
  {
    v32 = v25;
    v37 = v24;
    v27 = sub_80CF920((int)&ptr, nullptr, v26 + 1, 1u);
    v25 = v32;
    ptr = v27;
    v24 = v37;
  }
  v50 = v26 + 1;
  memmove(v27, (char *)v24 + v25, v26);
  *((_BYTE *)ptr + v26) = 0;
  v4 = ptr;
  if ( v50 )
  {
    v38 = v50 - 1;
    v3 = v50 + 5;
    v5 = v50 + 6;
  }
  else
  {
    v5 = 7;
    v3 = 6;
    v38 = 0;
  }
  if ( v51 < v5 )
    goto LABEL_6;
LABEL_7:
  v50 = v5;
  *((_BYTE *)v4 + v3) = 0;
  v6 = (char *)ptr + v38;
  v34 = (char *)(a1 + 1);
  *((_WORD *)v6 + 2) = 26485;
  *(_DWORD *)v6 = 1650811950;
  v7 = a1[257];
  if ( !(12 * (_DWORD)a1[258]) )
  {
LABEL_24:
    if ( ptr )
    {
      v50 = 0;
      sub_80CF780(ptr);
    }
    if ( v46 )
    {
      v47 = 0;
      sub_80CF780(v46);
    }
LABEL_28:
    if ( (unsigned int)a1[264] <= 1 )
      goto LABEL_32;
    v13 = (char *)&qword_811CFF4 - 258076;
    if ( a1[261] )
      v13 = (char *)a1[260];
    if ( !(unsigned __int8)sub_80CE6B0(dest, 0x1000u, v13) )
      goto LABEL_32;
    v14 = (__int64 **)&qword_811CFF4 - 64519;
    if ( a1[264] )
      v14 = a1[263];
    sub_80CE680((char *)a1 + 4, 1024, dest, v14, 0);
    v15 = **a1;
    if ( v15 == (__int64 *)sub_8054C20 )
    {
      if ( (unsigned __int8)sub_80CED40((int)(a1 + 1)) )
      {
        v36 = sub_80CD4D0((int)(a1 + 1), 0);
        v43 = sub_80C45E0(v36);
        sub_80CD620(v36);
        if ( (__int64 **)v43 == a1[269] )
          goto LABEL_66;
      }
      sub_805A3A0();
    }
    else
    {
      v44 = ((int (__cdecl *)(__int64 ***, int))v15)(a1, 1);
      sub_805A3A0();
      result = v44;
      if ( v44 )
        goto LABEL_33;
    }
    v16 = (__int64 **)&qword_811CFF4 - 64519;
    if ( a1[264] )
      v16 = a1[263];
    sub_80CE680((char *)a1 + 4, 1024, dest, ".debug", v16, 0);
    v17 = **a1;
    if ( v17 == (__int64 *)sub_8054C20 )
    {
      if ( (unsigned __int8)sub_80CED40((int)(a1 + 1)) )
      {
        v35 = sub_80CD4D0((int)(a1 + 1), 0);
        v41 = sub_80C45E0(v35);
        sub_80CD620(v35);
        if ( (__int64 **)v41 == a1[269] )
        {
LABEL_66:
          sub_805A3A0();
          result = 1;
          goto LABEL_33;
        }
      }
      sub_805A3A0();
    }
    else
    {
      v45 = ((int (__cdecl *)(__int64 ***, int))v17)(a1, 1);
      sub_805A3A0();
      result = v45;
      if ( v45 )
        goto LABEL_33;
    }
    if ( 12 * (_DWORD)a1[258] )
    {
      v42 = (char *)(a1 + 1);
      for ( i = a1[257]; i != &a1[257][3 * (_DWORD)a1[258]]; i += 3 )
      {
        v19 = (__int64 **)&qword_811CFF4 - 64519;
        if ( a1[264] )
          v19 = a1[263];
        v20 = (char *)&qword_811CFF4 - 258076;
        if ( i[1] )
          v20 = (char *)*i;
        sub_80CE680(v42, 1024, v20, dest, v19, 0);
        v21 = **a1;
        if ( v21 == (__int64 *)sub_8054C20 )
        {
          if ( (unsigned __int8)sub_80CED40((int)v42) )
          {
            v29 = sub_80CD4D0((int)v42, 0);
            v30 = sub_80C45E0(v29);
            sub_80CD620(v29);
            if ( (__int64 **)v30 == a1[269] )
              goto LABEL_66;
          }
          sub_805A3A0();
        }
        else
        {
          v28 = ((int (__cdecl *)(__int64 ***, int))v21)(a1, 1);
          sub_805A3A0();
          if ( v28 )
          {
            result = v28;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_32:
    result = 0;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v8 = (char *)&qword_811CFF4 - 258076;
    if ( v50 )
      v8 = (char *)ptr;
    v9 = (char *)&qword_811CFF4 - 258076;
    if ( v47 )
      v9 = (char *)v46;
    v10 = (char *)&qword_811CFF4 - 258076;
    if ( v7[1] )
      v10 = (char *)*v7;
    sub_80CE680(v34, 1024, v10, (char *)&qword_811CFF4 - 276844, v9, v8, 0);
    v11 = **a1;
    if ( v11 == (__int64 *)((char *)&qword_811CFF4 - 820180) )
      break;
    v31 = ((int (__cdecl *)(__int64 ***, _DWORD))v11)(a1, 0);
    sub_805A3A0();
    result = v31;
    if ( v31 )
      goto LABEL_20;
LABEL_10:
    v7 += 3;
    if ( v7 == &a1[257][3 * (_DWORD)a1[258]] )
      goto LABEL_24;
  }
  if ( !(unsigned __int8)sub_80CED40((int)v34) )
  {
    sub_805A3A0();
    goto LABEL_10;
  }
  sub_805A3A0();
  result = 1;
LABEL_20:
  if ( ptr )
  {
    v39 = result;
    v50 = 0;
    sub_80CF780(ptr);
    result = v39;
  }
  if ( v46 )
  {
    v40 = result;
    v47 = 0;
    sub_80CF780(v46);
    result = v40;
  }
LABEL_33:
  if ( v53 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
