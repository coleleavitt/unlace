/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CB0
// Address: 0x00042CB0

//----- (00042CB0) --------------------------------------------------------
int __fastcall sub_42CB0(int *a1, _DWORD *a2, int a3, int (__cdecl ***a4)(_DWORD, int, char *))
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // esi
  int v15; // edi
  int v16; // edx
  unsigned int v17; // ebx
  int v18; // edi
  _QWORD *v19; // ecx
  char *v20; // eax
  unsigned int v22; // [esp+10h] [ebp-7Ch]
  unsigned int v23; // [esp+14h] [ebp-78h]
  unsigned int v24; // [esp+18h] [ebp-74h]
  unsigned int v26; // [esp+20h] [ebp-6Ch]
  int v27; // [esp+20h] [ebp-6Ch]
  _DWORD v28[4]; // [esp+28h] [ebp-64h] BYREF
  int v29; // [esp+38h] [ebp-54h]
  unsigned int v30; // [esp+3Ch] [ebp-50h]
  unsigned int v31; // [esp+40h] [ebp-4Ch]
  void *v32[2]; // [esp+44h] [ebp-48h] BYREF
  int v33; // [esp+4Ch] [ebp-40h]
  int v34; // [esp+50h] [ebp-3Ch]
  int v35; // [esp+54h] [ebp-38h]
  int v36; // [esp+58h] [ebp-34h]
  int v37; // [esp+5Ch] [ebp-30h]
  int v38; // [esp+64h] [ebp-28h] BYREF
  char *v39; // [esp+68h] [ebp-24h] BYREF
  int v40; // [esp+6Ch] [ebp-20h]
  int v41; // [esp+70h] [ebp-1Ch]
  unsigned int v42; // [esp+78h] [ebp-14h]

  v42 = __readgsdword(0x14u);
  v28[0] = &off_13484C;
  v28[1] = a1;
  v4 = a2[6];
  v5 = a2[7];
  v28[3] = v5;
  v28[2] = v4;
  v30 = 0;
  v29 = 0;
  v26 = a2[14];
  v31 = v26;
  v32[1] = nullptr;
  v32[0] = nullptr;
  v34 = 0;
  v33 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  if ( a2[1] == 8 )
  {
    LODWORD(v6) = 0;
    v7 = 0;
  }
  else
  {
    v24 = v4;
    v22 = v5;
    v8 = a1[14];
    v9 = *(_QWORD *)(a1[43] + 372) - *(_QWORD *)(a1[43] + 364);
    if ( (unsigned int)(a2 + 16) >= v8 && (unsigned int)(a2 + 16) < (a1[15] << 6) + v8 )
    {
      v10 = a2[23];
      v23 = a2[22];
      if ( __PAIR64__(v10, v23) < v9 && __PAIR64__(v10, v23) >= __PAIR64__(v22, v24) )
        v9 = *((_QWORD *)a2 + 11);
    }
    LODWORD(v6) = 0;
    v7 = 0;
    if ( __PAIR64__(v22, v24) < v9 )
    {
      LODWORD(v13) = a2[8];
      v12 = a2[9];
      v11 = v9 - __PAIR64__(v22, v24);
      HIDWORD(v13) = v12;
      if ( v13 < v11 )
        v11 = __PAIR64__(v12, v13);
      v7 = HIDWORD(v11);
      LODWORD(v6) = v11;
    }
  }
  if ( v26 )
  {
    v6 = __PAIR64__(v7, v6) / v26;
    v7 = HIDWORD(v6);
  }
  v29 = v6;
  v30 = v7;
  v14 = 0;
  do
  {
    v15 = 0;
    if ( !sub_43100((int)v28, &v38) )
      break;
    if ( v14 )
    {
      v16 = *(__int16 *)(v38 + 30);
      v17 = *(_DWORD *)(v38 + 24);
      v27 = *(_DWORD *)(v38 + 32);
      if ( v16 > -16 )
      {
        if ( (unsigned __int16)v16 != 65521 && (_WORD)v16 )
        {
LABEL_20:
          if ( v17 && (*(_BYTE *)(v38 + 28) & 0xFu) - 1 <= 1 )
          {
            v18 = *((_DWORD *)&qword_13ACD8 + 1043);
            if ( v18 == -1 )
              v18 = 0;
            v39 = nullptr;
            v40 = 0;
            v41 = 0;
            v19 = a1 + 57;
            if ( a3 != 1 )
            {
              v19 = a1 + 65;
              if ( a3 != 2 )
              {
                if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                  interr(20086);
                BUG();
              }
            }
            sub_3C8A0(a1, (void **)&v39, v19, v17);
            if ( v40 )
              v20 = v39;
            else
              v20 = (char *)&qword_13ACD8 - 308323;
            v15 = (**a4)(a4, v27 - v18, v20);
            if ( v39 )
            {
              v40 = 0;
              qfree(v39);
              v39 = nullptr;
              v41 = 0;
            }
          }
        }
      }
      else if ( (unsigned __int16)v16 != 65280 && (unsigned __int16)v16 != 65311 )
      {
        goto LABEL_20;
      }
    }
    --v14;
  }
  while ( !v15 );
  v28[0] = &off_13484C;
  if ( v32[0] )
  {
    sub_41610((int *)v32, 0);
    qfree(v32[0]);
    v32[0] = nullptr;
    v33 = 0;
  }
  return v15;
}
// 13484C: using guessed type int (__cdecl *off_13484C)(int);
// 13ACD8: using guessed type __int64 qword_13ACD8;
