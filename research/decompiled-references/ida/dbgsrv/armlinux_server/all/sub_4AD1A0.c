/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AD1A0
// Address: 0x00000000004AD1A0

//----- (00000000004AD1A0) ----------------------------------------------------
__int64 __fastcall sub_4AD1A0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v4; // x20
  unsigned int v5; // w21
  const char *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  void (__fastcall *v9)(__int64, __int64, __int64); // x3
  __int64 v10; // x2
  char v11; // w23
  __int64 v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  void (__fastcall *v15)(__int64, __int64, __int64); // x3
  __int64 v16; // x2
  char v17; // w21
  __int64 v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  void (__fastcall *v21)(__int64, __int64, __int64); // x3
  __int64 v22; // x2
  char v23; // w21
  const char *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  void (__fastcall *v27)(__int64, __int64, __int64); // x3
  __int64 v28; // x2
  char v29; // w21
  __int64 v30; // x0
  __int64 v31; // x2
  void (__fastcall *v32)(__int64, __int64, __int64); // x3
  __int64 v33; // x1
  __int64 v34; // x2
  void (__fastcall *v35)(__int64, __int64, __int64); // x3
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x2
  void (__fastcall *v39)(__int64, __int64, __int64); // x3
  __int64 v40; // x2
  void (__fastcall *v41)(__int64, __int64, __int64); // x3
  __int64 v42; // x2
  __int64 v43; // x2
  void (__fastcall *v44)(__int64, __int64, __int64); // x3
  const char *v45; // x20
  __int64 v46; // x2
  void (__fastcall *v47)(__int64, __int64, __int64); // x3
  __int64 v48; // x2
  char v49; // w21
  const char *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  void (__fastcall *v53)(__int64, __int64, __int64); // x3
  __int64 v54; // x2
  char v55; // w21
  const char *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  void (__fastcall *v59)(__int64, __int64, __int64); // x3
  __int64 v60; // x2
  char v61; // w21
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x2
  void (__fastcall *v65)(__int64, __int64, __int64); // x3
  unsigned int *v66; // x2
  const char *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  void (__fastcall *v70)(__int64, __int64, __int64); // x3
  __int64 v71; // x2
  char v72; // w21
  const char *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  void (__fastcall *v76)(__int64, __int64, __int64); // x3
  __int64 v77; // x2
  char v78; // w23
  __int64 v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  void (__fastcall *v82)(__int64, __int64, __int64); // x3
  __int64 v83; // x2
  char v84; // w21
  __int64 v85; // x22
  __int64 v86; // x2
  void (__fastcall *v87)(__int64, __int64, __int64); // x3
  __int64 v88; // x2
  char v89; // w23
  unsigned int *v90; // x2
  __int64 v91; // x3
  __int64 v92; // x2
  void (__fastcall *v93)(__int64, __int64, __int64); // x3
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x2
  void (__fastcall *v97)(__int64, __int64, __int64); // x3

  v3 = result;
  v4 = a3;
  v5 = a2;
  switch ( *(_DWORD *)a3 )
  {
    case 3:
      a3 = *(_QWORD *)(a3 + 8);
      return def_4AD1E4(result, a2, (unsigned int *)a3);
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2C:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4D:
      return def_4AD1E4(result, a2, (unsigned int *)a3);
    case 0x19:
    case 0x1C:
      v12 = 0;
      v13 = *(_QWORD *)(result + 256);
      do
      {
        v17 = aRestrict[v12];
        if ( v13 == 255 )
        {
          v15 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v14 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v15(v3, 255, v14);
          v13 = 1;
          v16 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v16 = v13++;
        }
        *(_QWORD *)(v3 + 256) = v13;
        ++v12;
        *(_BYTE *)(v3 + v16) = v17;
        *(_BYTE *)(v3 + 264) = v17;
      }
      while ( v12 != 9 );
      return result;
    case 0x1A:
    case 0x1D:
      v18 = 0;
      v19 = *(_QWORD *)(result + 256);
      do
      {
        v23 = aVolatile[v18];
        if ( v19 == 255 )
        {
          v21 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v20 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v21(v3, 255, v20);
          v19 = 1;
          v22 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v22 = v19++;
        }
        *(_QWORD *)(v3 + 256) = v19;
        ++v18;
        *(_BYTE *)(v3 + v22) = v23;
        *(_BYTE *)(v3 + 264) = v23;
      }
      while ( v18 != 9 );
      return result;
    case 0x1B:
    case 0x1E:
      v24 = " const";
      v25 = *(_QWORD *)(result + 256);
      do
      {
        v29 = *v24;
        if ( v25 == 255 )
        {
          v27 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v26 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v27(v3, 255, v26);
          v25 = 1;
          v28 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v28 = v25++;
        }
        *(_QWORD *)(v3 + 256) = v25;
        ++v24;
        *(_BYTE *)(v3 + v28) = v29;
        *(_BYTE *)(v3 + 264) = v29;
      }
      while ( "" != v24 );
      return result;
    case 0x1F:
      v30 = *(_QWORD *)(result + 256);
      if ( v30 == 255 )
      {
        v32 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
        v31 = *(_QWORD *)(v3 + 280);
        *(_BYTE *)(v3 + 255) = 0;
        v32(v3, 255, v31);
        *(_QWORD *)(v3 + 256) = 0;
        v30 = 0;
        ++*(_QWORD *)(v3 + 320);
      }
      v33 = v30 + 1;
      *(_QWORD *)(v3 + 256) = v30 + 1;
      *(_BYTE *)(v3 + v30) = 32;
      *(_BYTE *)(v3 + 264) = 32;
      goto LABEL_40;
    case 0x20:
      result = *(_QWORD *)(result + 256);
      if ( result == 255 )
      {
        v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
        v34 = *(_QWORD *)(v3 + 280);
        *(_BYTE *)(v3 + 255) = 0;
        v35(v3, 255, v34);
        *(_QWORD *)(v3 + 256) = 0;
        result = 0;
        ++*(_QWORD *)(v3 + 320);
      }
      v36 = result + 1;
      *(_QWORD *)(v3 + 256) = result + 1;
      *(_BYTE *)(v3 + result) = 32;
      *(_BYTE *)(v3 + 264) = 32;
      goto LABEL_44;
    case 0x21:
      v37 = *(_QWORD *)(result + 256);
      if ( v37 == 255 )
      {
        v39 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
        v38 = *(_QWORD *)(v3 + 280);
        *(_BYTE *)(v3 + 255) = 0;
        v39(v3, 255, v38);
        *(_QWORD *)(v3 + 256) = 0;
        v37 = 0;
        ++*(_QWORD *)(v3 + 320);
      }
      *(_QWORD *)(v3 + 256) = v37 + 1;
      *(_BYTE *)(v3 + v37) = 32;
      *(_BYTE *)(v3 + 264) = 32;
      return def_4AD1E4(v3, v5, *(unsigned int **)(v4 + 16));
    case 0x22:
      if ( (a2 & 4) == 0 )
      {
        result = *(_QWORD *)(result + 256);
        if ( result == 255 )
        {
          v41 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v40 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v41(v3, 255, v40);
          *(_QWORD *)(v3 + 256) = 0;
          result = 0;
          ++*(_QWORD *)(v3 + 320);
        }
        *(_QWORD *)(v3 + 256) = result + 1;
        *(_BYTE *)(v3 + result) = 42;
        *(_BYTE *)(v3 + 264) = 42;
      }
      return result;
    case 0x23:
      v33 = *(_QWORD *)(result + 256);
LABEL_40:
      v42 = v33 + 1;
      if ( v33 == 255 )
      {
        v44 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
        v43 = *(_QWORD *)(v3 + 280);
        *(_BYTE *)(v3 + 255) = 0;
        v44(v3, 255, v43);
        v42 = 1;
        v33 = 0;
        ++*(_QWORD *)(v3 + 320);
      }
      *(_QWORD *)(v3 + 256) = v42;
      *(_BYTE *)(v3 + v33) = 38;
      *(_BYTE *)(v3 + 264) = 38;
      return 38;
    case 0x24:
      v36 = *(_QWORD *)(result + 256);
LABEL_44:
      v45 = "&&";
      do
      {
        v49 = *v45;
        if ( v36 == 255 )
        {
          v47 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v46 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v47(v3, 255, v46);
          v36 = 1;
          v48 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v48 = v36++;
        }
        *(_QWORD *)(v3 + 256) = v36;
        ++v45;
        *(_BYTE *)(v3 + v48) = v49;
        *(_BYTE *)(v3 + 264) = v49;
      }
      while ( "" != v45 );
      return result;
    case 0x25:
      v50 = "complex ";
      v51 = *(_QWORD *)(result + 256);
      do
      {
        v55 = *v50;
        if ( v51 == 255 )
        {
          v53 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v52 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v53(v3, 255, v52);
          v51 = 1;
          v54 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v54 = v51++;
        }
        *(_QWORD *)(v3 + 256) = v51;
        ++v50;
        *(_BYTE *)(v3 + v54) = v55;
        *(_BYTE *)(v3 + 264) = v55;
      }
      while ( v50 != "" );
      return result;
    case 0x26:
      v56 = "imaginary ";
      v57 = *(_QWORD *)(result + 256);
      do
      {
        v61 = *v56;
        if ( v57 == 255 )
        {
          v59 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v58 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v59(v3, 255, v58);
          v57 = 1;
          v60 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v60 = v57++;
        }
        *(_QWORD *)(v3 + 256) = v57;
        ++v56;
        *(_BYTE *)(v3 + v60) = v61;
        *(_BYTE *)(v3 + 264) = v61;
      }
      while ( "" != v56 );
      return result;
    case 0x2B:
      if ( *(_BYTE *)(result + 264) != 40 )
      {
        v62 = *(_QWORD *)(result + 256);
        v63 = v62 + 1;
        if ( v62 == 255 )
        {
          v65 = *(void (__fastcall **)(__int64, __int64, __int64))(result + 272);
          v64 = *(_QWORD *)(result + 280);
          *(_BYTE *)(result + 255) = 0;
          v65(result, 255, v64);
          v63 = 1;
          v62 = 0;
          ++*(_QWORD *)(v3 + 320);
        }
        *(_QWORD *)(v3 + 256) = v63;
        *(_BYTE *)(v3 + v62) = 32;
        *(_BYTE *)(v3 + 264) = 32;
      }
      v66 = *(unsigned int **)(v4 + 8);
      v67 = "::*";
      result = def_4AD1E4(v3, v5, v66);
      v68 = *(_QWORD *)(v3 + 256);
      do
      {
        v72 = *v67;
        if ( v68 == 255 )
        {
          v70 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v69 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v70(v3, 255, v69);
          v68 = 1;
          v71 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v71 = v68++;
        }
        *(_QWORD *)(v3 + 256) = v68;
        ++v67;
        *(_BYTE *)(v3 + v71) = v72;
        *(_BYTE *)(v3 + 264) = v72;
      }
      while ( v67 != "" );
      return result;
    case 0x2D:
      v73 = " __vector(";
      v74 = *(_QWORD *)(result + 256);
      do
      {
        v78 = *v73;
        if ( v74 == 255 )
        {
          v76 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v75 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v76(v3, 255, v75);
          v74 = 1;
          v77 = 0;
          ++*(_QWORD *)(v3 + 320);
        }
        else
        {
          v77 = v74++;
        }
        *(_QWORD *)(v3 + 256) = v74;
        ++v73;
        *(_BYTE *)(v3 + v77) = v78;
        *(_BYTE *)(v3 + 264) = v78;
      }
      while ( v73 != "" );
      v90 = *(unsigned int **)(v4 + 8);
      goto LABEL_87;
    case 0x4C:
      v79 = 0;
      v80 = *(_QWORD *)(result + 256);
      do
      {
        v84 = aTransactionSaf[v79];
        if ( v80 == 255 )
        {
          v82 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v81 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v82(v3, 255, v81);
          v80 = 1;
          v83 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v83 = v80++;
        }
        *(_QWORD *)(v3 + 256) = v80;
        ++v79;
        *(_BYTE *)(v3 + v83) = v84;
        *(_BYTE *)(v3 + 264) = v84;
      }
      while ( v79 != 17 );
      return result;
    case 0x4E:
      v85 = 0;
      v7 = *(_QWORD *)(result + 256);
      do
      {
        v89 = aNoexcept[v85];
        if ( v7 == 255 )
        {
          v87 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v86 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v87(v3, 255, v86);
          v7 = 1;
          v88 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v88 = v7++;
        }
        *(_QWORD *)(v3 + 256) = v7;
        ++v85;
        *(_BYTE *)(v3 + v88) = v89;
        *(_BYTE *)(v3 + 264) = v89;
      }
      while ( v85 != 9 );
      goto LABEL_83;
    case 0x4F:
      v6 = " throw";
      v7 = *(_QWORD *)(result + 256);
      do
      {
        v11 = *v6;
        if ( v7 == 255 )
        {
          v9 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v8 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v9(v3, 255, v8);
          v7 = 1;
          v10 = 0;
          result = *(_QWORD *)(v3 + 320) + 1LL;
          *(_QWORD *)(v3 + 320) = result;
        }
        else
        {
          v10 = v7++;
        }
        *(_QWORD *)(v3 + 256) = v7;
        ++v6;
        *(_BYTE *)(v3 + v10) = v11;
        *(_BYTE *)(v3 + 264) = v11;
      }
      while ( "" != v6 );
LABEL_83:
      v90 = *(unsigned int **)(v4 + 16);
      if ( v90 )
      {
        v91 = v7 + 1;
        if ( v7 == 255 )
        {
          v93 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v92 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v93(v3, 255, v92);
          v91 = 1;
          v90 = *(unsigned int **)(v4 + 16);
          v7 = 0;
          ++*(_QWORD *)(v3 + 320);
        }
        *(_QWORD *)(v3 + 256) = v91;
        *(_BYTE *)(v3 + v7) = 40;
        *(_BYTE *)(v3 + 264) = 40;
LABEL_87:
        def_4AD1E4(v3, v5, v90);
        v94 = *(_QWORD *)(v3 + 256);
        v95 = v94 + 1;
        if ( v94 == 255 )
        {
          v97 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
          v96 = *(_QWORD *)(v3 + 280);
          *(_BYTE *)(v3 + 255) = 0;
          v97(v3, 255, v96);
          v95 = 1;
          v94 = 0;
          ++*(_QWORD *)(v3 + 320);
        }
        *(_QWORD *)(v3 + 256) = v95;
        *(_BYTE *)(v3 + v94) = 41;
        *(_BYTE *)(v3 + 264) = 41;
        return 41;
      }
      return result;
    default:
      JUMPOUT(0x4AD120);
  }
}
// 4AD1E4: control flows out of bounds to 4AD120
