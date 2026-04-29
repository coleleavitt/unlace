__int64 __fastcall dyld3::MachOAnalyzer::forEachBind_Relocations(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v11; // x26
  int *LinkEditContent; // x27
  int *v13; // x28
  __int64 v14; // x25
  __int64 v15; // x0
  __int64 v16; // x8
  unsigned int v17; // w4
  unsigned int v18; // w5
  __int64 v19; // x3
  __int64 v20; // x8
  int v21; // w6
  _QWORD *v22; // x7
  int v23; // w9
  unsigned int v24; // w11
  unsigned __int64 v25; // x14
  __int64 v26; // x10
  unsigned __int64 v27; // x15
  bool v28; // w16
  _QWORD *v29; // x13
  unsigned __int64 v30; // x12
  __int64 v31; // x26
  __int64 v32; // x16
  __int64 v33; // x17
  unsigned int *v34; // x14
  __int64 v35; // x14
  unsigned __int16 *v36; // x15
  unsigned int v37; // w15
  _BYTE *v38; // x16
  _BYTE *v39; // x17
  int v40; // w0
  unsigned int v41; // w1
  unsigned int v42; // w17
  int v43; // w0
  _BYTE *v44; // x11
  __int64 v45; // x24
  __int64 v47; // x7
  bool v49; // w8
  __int64 v50; // x28
  __int64 v52; // [xsp+0h] [xbp-130h]
  int v53; // [xsp+10h] [xbp-120h]
  int v54; // [xsp+20h] [xbp-110h]
  int v55; // [xsp+30h] [xbp-100h]
  _QWORD *v56; // [xsp+40h] [xbp-F0h]
  int v57; // [xsp+4Ch] [xbp-E4h]
  unsigned int v58; // [xsp+50h] [xbp-E0h]
  unsigned int v59; // [xsp+54h] [xbp-DCh]
  unsigned __int64 v60; // [xsp+58h] [xbp-D8h]
  __int64 v61; // [xsp+68h] [xbp-C8h]
  __int64 v62; // [xsp+70h] [xbp-C0h]
  _BOOL4 v63; // [xsp+78h] [xbp-B8h]
  int v64; // [xsp+7Ch] [xbp-B4h]
  char v65[9]; // [xsp+D7h] [xbp-59h] BYREF

  if ( *(_QWORD *)(a3 + 32) )
  {
    v11 = a3 + 72;
    v62 = dyld3::MachOAnalyzer::externalRelocBaseAddress(a1, a4, *(_DWORD *)(a3 + 104));
    LinkEditContent = (int *)dyld3::MachOLoaded::getLinkEditContent(
                               (__int64)a1,
                               v11,
                               *(_DWORD *)(*(_QWORD *)(a3 + 32) + 64LL));
    v13 = &LinkEditContent[2 * *(unsigned int *)(*(_QWORD *)(a3 + 32) + 68LL)];
    v63 = dyld3::MachOFile::is64(a1);
    v64 = dyld3::MachOFile::pointerSize(a1);
    v14 = dyld3::MachOFile::dependentDylibCount(a1, nullptr);
    v61 = dyld3::MachOLoaded::getLinkEditContent((__int64)a1, v11, *(_DWORD *)(*(_QWORD *)(a3 + 24) + 8LL));
    v15 = dyld3::MachOLoaded::getLinkEditContent((__int64)a1, v11, *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL));
    v16 = *(_QWORD *)(a3 + 24);
    v17 = *(_DWORD *)(v16 + 12);
    v18 = *(_DWORD *)(v16 + 20);
    v65[0] = 0;
    if ( v13 > LinkEditContent )
    {
      v19 = v15;
      v20 = 0;
      if ( v63 )
        v21 = 3;
      else
        v21 = 2;
      v22 = (_QWORD *)(a4 + 16);
      v23 = -1;
      while ( 1 )
      {
        v24 = LinkEditContent[1];
        if ( ((v24 >> 25) & 3) != v21 )
        {
          Diagnostics::error(a2, "external relocation has wrong r_length", v52);
          goto LABEL_49;
        }
        if ( v24 >> 28 )
        {
          Diagnostics::error(a2, "external relocation has wrong r_type", v52);
          goto LABEL_49;
        }
        v25 = *(unsigned int *)(a3 + 104);
        if ( !(_DWORD)v25 )
          goto LABEL_48;
        v26 = 0;
        v27 = v62 + *LinkEditContent;
        v28 = 1;
        v29 = v22;
        while ( 1 )
        {
          v30 = v27 - *v29;
          if ( v27 >= *v29 && v29[1] + *v29 > v27 )
            break;
          v28 = ++v26 < v25;
          v29 += 8;
          if ( v25 == v26 )
            goto LABEL_48;
        }
        if ( !v28 )
        {
LABEL_48:
          Diagnostics::error(a2, "local relocation has out of range r_address");
          goto LABEL_49;
        }
        v31 = *(_QWORD *)&v24 & 0xFFFFFFLL;
        if ( (v24 & 0xFFFFFF) > v17 )
        {
          Diagnostics::error(a2, "external relocation has out of range r_symbolnum", v52);
          goto LABEL_49;
        }
        v32 = v61 + 16 * v31;
        v33 = v61 + 12 * v31;
        if ( v63 )
          v34 = (unsigned int *)(v61 + 16 * v31);
        else
          v34 = (unsigned int *)(v61 + 12 * v31);
        v35 = *v34;
        v36 = (unsigned __int16 *)(v32 + 6);
        if ( !v63 )
          v36 = (unsigned __int16 *)(v33 + 6);
        v37 = *v36;
        v38 = (_BYTE *)(v32 + 4);
        v39 = (_BYTE *)(v33 + 4);
        if ( !v63 )
          v38 = v39;
        v40 = v37 >> 8;
        v41 = (unsigned __int8)(BYTE1(v37) + 2);
        if ( v41 < 3 )
          v40 = v41 - 2;
        v42 = (*((_BYTE *)a1 + 24) & 0x80) != 0 ? v40 : -2;
        if ( (unsigned int)v35 >= v18 )
          break;
        v43 = ~v24;
        v44 = (char *)a1 + *v29 - *(_QWORD *)(a3 + 80);
        v60 = (unsigned __int64)v13;
        v58 = v18;
        v59 = v17;
        v57 = v21;
        v56 = v22;
        if ( (v43 & 0x6000000) != 0 )
          v45 = *(unsigned int *)&v44[v30];
        else
          v45 = *(_QWORD *)&v44[v30];
        if ( (v37 & 0x80) != 0 && (~*v38 & 0xF) == 0 )
          v47 = 4294967293LL;
        else
          v47 = v42;
        v49 = v23 != (_DWORD)v31 || v20 != v45;
        LOBYTE(v55) = v49;
        LOWORD(v54) = (v37 & 0x40) != 0;
        LOBYTE(v53) = 1;
        BYTE4(v52) = v26;
        LODWORD(v52) = v64;
        v50 = v19;
        (*(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, int, __int64, int, __int64, int, char *))(a6 + 16))(
          a6,
          "external relocation",
          a3,
          a4,
          1,
          1,
          v14,
          v47,
          v52,
          v30,
          v53,
          v19 + v35,
          v54,
          v45,
          v55,
          v65);
        v19 = v50;
        LinkEditContent += 2;
        v13 = (int *)v60;
        v18 = v58;
        v17 = v59;
        v21 = v57;
        v22 = v56;
        if ( (unsigned __int64)LinkEditContent < v60 )
        {
          v20 = v45;
          v23 = v31;
          if ( (v65[0] & 1) == 0 )
            continue;
        }
        goto LABEL_49;
      }
      Diagnostics::error(a2, "external relocation has r_symbolnum=%d which has out of range n_strx");
    }
LABEL_49:
    dyld3::MachOAnalyzer::forEachIndirectPointer(a1, a2);
  }
  return 0;
}
