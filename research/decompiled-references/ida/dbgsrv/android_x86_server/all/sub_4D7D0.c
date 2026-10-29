/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D7D0
// Address: 0x0004D7D0

//----- (0004D7D0) --------------------------------------------------------
char __cdecl sub_4D7D0(int a1, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  void *v5; // eax
  char v7; // [esp+Fh] [ebp-10Dh]
  unsigned int v8[4]; // [esp+10h] [ebp-10Ch] BYREF
  char v9; // [esp+20h] [ebp-FCh]
  int v10; // [esp+24h] [ebp-F8h] BYREF
  __int16 v11; // [esp+28h] [ebp-F4h]
  int v12; // [esp+2Ah] [ebp-F2h]
  int v13; // [esp+2Eh] [ebp-EEh]
  int v14; // [esp+34h] [ebp-E8h]
  char v15; // [esp+38h] [ebp-E4h]
  int v16; // [esp+3Ch] [ebp-E0h]
  int v17; // [esp+40h] [ebp-DCh]
  int v18; // [esp+44h] [ebp-D8h]
  int v19; // [esp+48h] [ebp-D4h]
  int v20; // [esp+4Ch] [ebp-D0h]
  int v21; // [esp+50h] [ebp-CCh]
  int v22; // [esp+54h] [ebp-C8h]
  int v23; // [esp+58h] [ebp-C4h]
  int v24; // [esp+5Ch] [ebp-C0h]
  int v25; // [esp+60h] [ebp-BCh]
  int v26; // [esp+64h] [ebp-B8h]
  int v27; // [esp+68h] [ebp-B4h]
  int v28; // [esp+6Ch] [ebp-B0h]
  int v29; // [esp+70h] [ebp-ACh]
  int v30; // [esp+74h] [ebp-A8h]
  int v31; // [esp+78h] [ebp-A4h]
  _DWORD *v32; // [esp+7Ch] [ebp-A0h]
  int v33; // [esp+80h] [ebp-9Ch]
  char v34; // [esp+84h] [ebp-98h]
  int v35; // [esp+88h] [ebp-94h]
  char v36; // [esp+8Ch] [ebp-90h]
  int v37; // [esp+90h] [ebp-8Ch]
  int v38; // [esp+94h] [ebp-88h]
  int v39; // [esp+98h] [ebp-84h]
  int v40; // [esp+9Ch] [ebp-80h]
  int v41; // [esp+A0h] [ebp-7Ch]
  int v42; // [esp+A4h] [ebp-78h]
  int v43; // [esp+A8h] [ebp-74h]
  int v44; // [esp+ACh] [ebp-70h]
  int v45; // [esp+B0h] [ebp-6Ch]
  int v46; // [esp+B4h] [ebp-68h]
  int v47; // [esp+B8h] [ebp-64h]
  int v48; // [esp+BCh] [ebp-60h]
  int v49; // [esp+C0h] [ebp-5Ch]
  int v50; // [esp+C4h] [ebp-58h]
  int v51; // [esp+C8h] [ebp-54h]
  int v52; // [esp+CCh] [ebp-50h]
  int v53; // [esp+D0h] [ebp-4Ch]
  int v54; // [esp+D4h] [ebp-48h]
  int v55; // [esp+D8h] [ebp-44h]
  int v56; // [esp+DCh] [ebp-40h]
  int v57; // [esp+E0h] [ebp-3Ch]
  int v58; // [esp+E4h] [ebp-38h]
  int v59; // [esp+E8h] [ebp-34h]
  int v60; // [esp+ECh] [ebp-30h]
  int v61; // [esp+F0h] [ebp-2Ch]
  int v62; // [esp+F4h] [ebp-28h]
  int v63; // [esp+F8h] [ebp-24h]
  int v64; // [esp+FCh] [ebp-20h]
  int v65; // [esp+100h] [ebp-1Ch]
  char v66; // [esp+104h] [ebp-18h]
  unsigned int v67; // [esp+108h] [ebp-14h]

  v67 = __readgsdword(0x14u);
  v8[0] = (unsigned int)sub_4D790;
  v8[1] = 0;
  v8[2] = (unsigned int)&off_137B10;
  v8[3] = (unsigned int)&off_137BC0;
  v9 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  v19 = 0;
  v18 = 0;
  v11 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  v20 = a1;
  v22 = 0;
  v21 = 0;
  v24 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  v28 = 0;
  v27 = 0;
  v30 = 0;
  v29 = 0;
  v33 = 0;
  v32 = nullptr;
  v31 = 0;
  v34 = -90;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v37 = 0;
  v40 = 0;
  v39 = 0;
  v42 = 0;
  v41 = 0;
  v44 = 0;
  v43 = 0;
  v46 = 0;
  v45 = 0;
  v48 = 0;
  v47 = 0;
  v50 = 0;
  v49 = 0;
  v52 = 0;
  v51 = 0;
  v54 = 0;
  v53 = 0;
  v56 = 0;
  v55 = 0;
  v58 = 0;
  v57 = 0;
  v60 = 0;
  v59 = 0;
  v61 = a2;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = -1;
  v66 = a4;
  sub_75000(*(_DWORD *)(a1 + 16), (int)v8);
  set_qerrno(0);
  v7 = sub_76F30((int)v8, 0);
  if ( !v7 )
  {
    sub_4DB20(*(_DWORD **)(a1 + 16), (int)&v10, a3);
    v4 = v32;
    if ( v32 )
    {
      v5 = (void *)*v32;
      if ( *v32 )
      {
        v32[1] = 0;
        qfree(v5);
        *v4 = 0;
        v4[2] = 0;
      }
    }
    sub_46D10(v8);
  }
  sub_75000(*(_DWORD *)(a1 + 16), 0);
  sub_4DE10(v8);
  return v7;
}
// 137B10: using guessed type __int16 *off_137B10;
// 137BC0: using guessed type int (__cdecl *off_137BC0)(int);
