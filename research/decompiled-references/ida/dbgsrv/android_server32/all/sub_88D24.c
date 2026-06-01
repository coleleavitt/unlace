/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88D24
// Address: 0x00088D24

//----- (00088D24) --------------------------------------------------------
int __fastcall sub_88D24(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r2
  int *v7; // r3
  int *v8; // r6
  int v9; // r3
  int v11; // [sp+0h] [bp-94h]
  int v12; // [sp+4h] [bp-90h]
  int v13; // [sp+8h] [bp-8Ch]
  int v14; // [sp+Ch] [bp-88h]
  int v15; // [sp+10h] [bp-84h]
  int v16; // [sp+14h] [bp-80h]
  int v17; // [sp+18h] [bp-7Ch]
  int v18; // [sp+1Ch] [bp-78h]
  int v19; // [sp+20h] [bp-74h]
  int v20; // [sp+24h] [bp-70h]
  int v21; // [sp+28h] [bp-6Ch]
  int v22; // [sp+2Ch] [bp-68h]
  int v23; // [sp+30h] [bp-64h]
  int v24; // [sp+34h] [bp-60h]
  int v25; // [sp+38h] [bp-5Ch]
  int v26; // [sp+3Ch] [bp-58h]
  int v27; // [sp+40h] [bp-54h]
  int v28; // [sp+44h] [bp-50h]
  int v29; // [sp+48h] [bp-4Ch]
  int v30; // [sp+4Ch] [bp-48h]
  int v31; // [sp+50h] [bp-44h]
  int v32; // [sp+54h] [bp-40h]
  unsigned int *v33; // [sp+58h] [bp-3Ch]
  int v34; // [sp+5Ch] [bp-38h]
  int v35; // [sp+60h] [bp-34h]
  int v36; // [sp+64h] [bp-30h]
  _DWORD *v37; // [sp+68h] [bp-2Ch]
  int v38; // [sp+6Ch] [bp-28h]
  _DWORD *v39; // [sp+70h] [bp-24h]
  int v40; // [sp+74h] [bp-20h]
  int v41; // [sp+78h] [bp-1Ch]
  int v42; // [sp+7Ch] [bp-18h]
  int v43; // [sp+88h] [bp-Ch]

  v5 = -2;
  if ( !a1 )
    sub_8A37C(-2, a2, a3, a4, v11, v12, v13, v14, v15);
  if ( !a1[8] )
    sub_8A37C(v5, a2, 0, a4, v11, v12, v13, v14, v15);
  v6 = a1[9];
  if ( !v6 )
    sub_8A37C(v5, a2, 0, a4, v11, v12, v13, v14, v15);
  v7 = (int *)a1[7];
  if ( !v7 )
    sub_8A37C(v5, a2, v6, 0, v11, v12, v13, v14, v15);
  if ( (_DWORD *)*v7 != a1 )
    sub_8A37C(v5, a2, *v7, (int)v7, v11, v12, v13, v14, v15);
  v8 = v7;
  v9 = v7[1];
  if ( (unsigned int)(v9 - 16180) > 0x1F )
    sub_8A37C(v5, a2, v9 - 16180, v9, v11, v12, v13, v14, v15);
  v36 = a1[3];
  if ( !v36 )
    sub_8A37C(v5, a2, 0, v9, v11, v12, v13, v14, v15);
  if ( !*a1 )
    sub_8A1C0(
      v5,
      a2,
      0,
      v9,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      0,
      v8,
      v43);
  return sub_88D96();
}
// 88D3E: variable 'v11' is possibly undefined
// 88D3E: variable 'v12' is possibly undefined
// 88D3E: variable 'v13' is possibly undefined
// 88D3E: variable 'v14' is possibly undefined
// 88D3E: variable 'v15' is possibly undefined
// 88D48: variable 'v5' is possibly undefined
// 88D48: variable 'a2' is possibly undefined
// 88D48: variable 'a4' is possibly undefined
// 88D5C: variable 'v6' is possibly undefined
// 88D60: variable 'v7' is possibly undefined
// 88D86: variable 'v9' is possibly undefined
// 88D92: variable 'v16' is possibly undefined
// 88D92: variable 'v17' is possibly undefined
// 88D92: variable 'v18' is possibly undefined
// 88D92: variable 'v19' is possibly undefined
// 88D92: variable 'v20' is possibly undefined
// 88D92: variable 'v21' is possibly undefined
// 88D92: variable 'v22' is possibly undefined
// 88D92: variable 'v23' is possibly undefined
// 88D92: variable 'v24' is possibly undefined
// 88D92: variable 'v25' is possibly undefined
// 88D92: variable 'v26' is possibly undefined
// 88D92: variable 'v27' is possibly undefined
// 88D92: variable 'v28' is possibly undefined
// 88D92: variable 'v29' is possibly undefined
// 88D92: variable 'v30' is possibly undefined
// 88D92: variable 'v31' is possibly undefined
// 88D92: variable 'v32' is possibly undefined
// 88D92: variable 'v33' is possibly undefined
// 88D92: variable 'v34' is possibly undefined
// 88D92: variable 'v35' is possibly undefined
// 88D92: variable 'v37' is possibly undefined
// 88D92: variable 'v38' is possibly undefined
// 88D92: variable 'v39' is possibly undefined
// 88D92: variable 'v40' is possibly undefined
// 88D92: variable 'v41' is possibly undefined
// 88D92: variable 'v42' is possibly undefined
// 88D92: variable 'v43' is possibly undefined
// 88D96: using guessed type int sub_88D96(void);
