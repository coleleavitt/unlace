__int64 __fastcall sub_1D730(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 *v6; // rbp
  int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 i; // rax
  int is_32bit_abs_reloc; // eax
  unsigned __int64 v19; // r10
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 *v26; // rax
  int v27; // eax
  int is_64bit_abs_reloc; // eax
  int *v29; // [rsp+8h] [rbp-B0h]
  unsigned int v30; // [rsp+10h] [rbp-A8h]
  __int64 v31; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+18h] [rbp-A0h]
  __int64 v33; // [rsp+18h] [rbp-A0h]
  __int64 v34; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+20h] [rbp-98h]
  __int64 v36; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+30h] [rbp-88h]
  __int64 v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  int v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-68h]
  _QWORD *v42; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v44[9]; // [rsp+70h] [rbp-48h] BYREF

  v44[1] = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v6 = a3 + 45;
  if ( a2 != a3[48] )
  {
    v6 = a3 + 103;
    if ( a2 != a3[106] )
    {
      v6 = a3 + 132;
      if ( a2 != a3[135] )
      {
        v6 = a3 + 190;
        if ( a2 != a3[193] )
        {
          v6 = a3 + 219;
          if ( a2 != a3[222] )
          {
            v6 = a3 + 248;
            if ( a2 != a3[251] )
            {
              v6 = a3 + 335;
              if ( a2 != a3[338] )
              {
                v6 = a3 + 306;
                if ( a2 != a3[309] )
                {
                  v6 = a3 + 741;
                  if ( a2 != a3[744] )
                  {
                    v6 = a3 + 480;
                    if ( a2 != a3[483] )
                    {
                      v6 = a3 + 567;
                      if ( a2 != a3[570] )
                      {
                        v6 = a3 + 596;
                        if ( a2 != a3[599] )
                        {
                          v6 = a3 + 625;
                          if ( a2 != a3[628] )
                          {
                            v6 = a3 + 654;
                            if ( a2 != a3[657] )
                            {
                              v6 = a3 + 683;
                              if ( a2 != a3[686] )
                              {
                                v6 = a3 + 712;
                                if ( a2 != a3[715] )
                                {
                                  v6 = a3 + 74;
                                  if ( a2 != a3[77] )
                                  {
                                    v6 = a3 + 277;
                                    if ( a2 != a3[280] )
                                    {
                                      v6 = a3 + 451;
                                      if ( a2 != a3[454] )
                                      {
                                        v6 = a3 + 422;
                                        if ( a2 != a3[425] )
                                        {
                                          v6 = a3 + 393;
                                          if ( a2 != a3[396] )
                                          {
                                            v6 = a3 + 770;
                                            if ( a2 != a3[773] )
                                            {
                                              v6 = a3 + 799;
                                              if ( a2 != a3[802] )
                                              {
                                                v6 = a3 + 919;
                                                if ( a2 != a3[922] )
                                                {
                                                  v7 = 214;
                                                  if ( a2 != a3[951] )
                                                    goto LABEL_32;
                                                  v6 = a3 + 948;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v8 = v6[15];
  v7 = 215;
  if ( v8 )
  {
    if ( !*(_QWORD *)(a1 + 448) || !*(_QWORD *)(a1 + 456) )
    {
      v7 = 209;
      goto LABEL_32;
    }
    v7 = 212;
    if ( *(_QWORD *)(a1 + 480) == v6[21] )
    {
      if ( v8 >= *(_QWORD *)(a1 + 168) )
      {
        v7 = 438;
        goto LABEL_32;
      }
      v11 = *(_QWORD *)(a1 + 192) + 184 * v8;
      v12 = *(_QWORD *)(v11 + 136);
      v13 = v11;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) != 1 || !v12 )
        return 0;
      v14 = *(_QWORD *)(v11 + 144);
      if ( !v14 )
      {
        v7 = 280;
        goto LABEL_32;
      }
      v42 = a3;
      v9 = 0;
      v15 = 0;
      v29 = a4;
      for ( i = v14; ; i = *(_QWORD *)(v13 + 144) )
      {
        v26 = (__int64 *)(48 * v15 + i);
        if ( (unsigned __int64)*((unsigned int *)v26 + 4) >= *(_QWORD *)(a1 + 424) )
        {
          v27 = 232;
LABEL_50:
          v9 = 1;
          *v29 = v27;
          goto LABEL_46;
        }
        if ( *v26 >= (unsigned __int64)v6[1] )
          goto LABEL_53;
        v34 = *v26;
        v36 = *((unsigned int *)v26 + 4);
        v37 = *v6;
        v32 = v6[1];
        v40 = *((_DWORD *)v26 + 11);
        v30 = *(unsigned __int16 *)(a1 + 20);
        v38 = v26[4];
        v41 = v26[3];
        v39 = *(_QWORD *)(a1 + 448);
        is_32bit_abs_reloc = _dwarf_is_32bit_abs_reloc((unsigned int)v41);
        v19 = v32;
        v20 = is_32bit_abs_reloc;
        v21 = v34;
        v22 = v36;
        v23 = 4;
        if ( !v20 )
        {
          is_64bit_abs_reloc = _dwarf_is_64bit_abs_reloc((unsigned int)v41, v30);
          v19 = v32;
          v21 = v34;
          v22 = v36;
          if ( !is_64bit_abs_reloc )
          {
            v27 = 233;
            if ( (_DWORD)v41 )
              goto LABEL_50;
            goto LABEL_46;
          }
          v23 = 8;
        }
        v24 = __CFADD__(v23, v21);
        if ( __CFADD__(v23, v21) || v19 < v23 + v21 )
        {
LABEL_53:
          v27 = 333;
          goto LABEL_50;
        }
        v43 = 0;
        v25 = v21 + v37;
        if ( !v40 )
        {
          v33 = v23;
          v35 = v22;
          v31 = v25;
          v44[0] = 0;
          ((void (__fastcall *)(_QWORD *, __int64, __int64))v42[1037])(v44, v25, v23);
          v24 = v44[0];
          v22 = v35;
          v23 = v33;
          v25 = v31;
        }
        v43 = v24 + *(_QWORD *)(v39 + (v22 << 6) + 8) + v38;
        ((void (__fastcall *)(__int64, __int64 *, __int64))v42[1037])(v25, &v43, v23);
LABEL_46:
        if ( ++v15 >= v12 )
          return v9;
      }
    }
  }
LABEL_32:
  *a4 = v7;
  return 1;
}

