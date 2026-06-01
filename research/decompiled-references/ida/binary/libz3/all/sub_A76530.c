__int64 __fastcall sub_A76530(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned int v16; // eax
  void *v17; // rbx
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  bool v22; // bl
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  void *v27; // r15
  _QWORD *v28; // r15
  __int64 (__fastcall *v29)(); // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // edi
  unsigned int v36; // edx
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 *v39; // r9
  __int64 *i; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  char v44; // r13
  __int64 v45; // rax
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  void *v50; // [rsp+0h] [rbp-78h]
  __int64 v51; // [rsp+0h] [rbp-78h]
  int v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+8h] [rbp-70h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+18h] [rbp-60h] BYREF
  int v56[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v57; // [rsp+28h] [rbp-50h]
  void *v58; // [rsp+30h] [rbp-48h] BYREF
  __int64 v59; // [rsp+38h] [rbp-40h]
  int v60; // [rsp+40h] [rbp-38h]
  __int64 v61; // [rsp+48h] [rbp-30h]

  v2 = *(_BYTE **)(a1 + 64);
  v2[768] = 0;
  if ( (unsigned __int8)sub_18290A0(*((_QWORD *)v2 + 1)) )
  {
    if ( *((_QWORD *)v2 + 63) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
      if ( v3 )
      {
        if ( *(_DWORD *)(v3 - 4) )
        {
          v43 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
          v44 = v2[768];
          v45 = sub_180C100(v43 + 8400, 24);
          *(_BYTE *)(v45 + 16) = v44;
          *(_QWORD *)v45 = off_1C54EE8;
          *(_QWORD *)(v45 + 8) = v2 + 768;
          *(_QWORD *)v56 = v45;
          sub_A73EF0((_QWORD *)(v43 + 9456), v56);
          v2[768] = sub_FFD310(
                      *((_QWORD *)v2 + 63),
                      (int)v56,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v52,
                      v54,
                      v55,
                      v56[0],
                      v57,
                      v58,
                      v59,
                      v60,
                      v61);
        }
      }
    }
  }
  v4 = sub_186B270(0x68u);
  sub_1342CC0(v4, *((_QWORD *)v2 + 1));
  *((_QWORD *)v2 + 62) = v4;
  result = sub_A6F1C0(a2, v4);
  if ( v2[768] )
  {
    v53 = *((_QWORD *)v2 + 1);
    v6 = *(_QWORD *)v2;
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    if ( v7 && (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8) )
    {
      v9 = 8 * v8;
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(__int64 **)(v7 + v10);
        *(_QWORD *)v56 = 0;
        v58 = &dword_0 + 1;
        v13 = *(unsigned int *)(v6 + 8);
        v57 = 0;
        v59 = 0;
        v14 = sub_B39350(v12, v13);
        if ( v14 == -1
          || (v15 = v14, !(unsigned __int8)sub_FFAE60(*((_QWORD *)v2 + 63)))
          || (v16 = sub_FF9FB0(*((_QWORD *)v2 + 63), v15), !(unsigned __int8)sub_FFBF50(*((_QWORD *)v2 + 63), v16, v56))
          || (unsigned __int8)sub_A72E00(*v12) && ((BYTE4(v58) & 1) != 0 || (_DWORD)v58 != 1) )
        {
          v17 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v56);
          sub_182CBA0(v17, &v58);
        }
        else
        {
          v18 = *(_DWORD **)(sub_15D1F10(*v12) + 24);
          v22 = 0;
          if ( v18 && *v18 == 5 )
            v22 = v18[1] == 1;
          v23 = *((_QWORD *)v2 + 3);
          if ( !v23 )
          {
            sub_16669E0(v2 + 16);
            v23 = *((_QWORD *)v2 + 3);
          }
          v24 = sub_166A700(v23, (unsigned int)v56, v22, v19, v20, v21);
          v25 = v24;
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v11 + 8))-- == 1 )
              sub_15D7BC0(v53, v11);
          }
          v27 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v56);
          sub_182CBA0(v27, &v58);
          v28 = *((_QWORD **)v2 + 62);
          v29 = *(__int64 (__fastcall **)())(*v28 + 40LL);
          if ( v29 == sub_A91AA0 )
          {
            v30 = sub_15D1F10(v25);
            v31 = sub_A914A0(v28, v30);
            v32 = *(__int64 **)v31;
            v33 = v31;
            v34 = *(unsigned int *)(v31 + 8);
            v35 = *(_DWORD *)(v25 + 12);
            v36 = v34 - 1;
            v34 *= 8;
            v37 = (__int64 *)((char *)v32 + v34);
            v38 = 8LL * (v35 & v36);
            v39 = &v32[(unsigned __int64)v38 / 8];
            if ( v38 != v34 )
            {
              for ( i = &v32[(unsigned __int64)v38 / 8]; v37 != i; ++i )
              {
                v41 = *i;
                if ( (unsigned __int64)*i > 1 )
                {
                  if ( *(_DWORD *)(v41 + 12) == v35 && v25 == v41 )
                    goto LABEL_41;
                }
                else if ( !v41 )
                {
                  goto LABEL_40;
                }
              }
            }
            for ( ; v39 != v32; ++v32 )
            {
              v42 = *v32;
              if ( (unsigned __int64)*v32 > 1 )
              {
                if ( *(_DWORD *)(v42 + 12) == v35 && v25 == v42 )
                  goto LABEL_41;
              }
              else if ( !v42 )
              {
                break;
              }
            }
LABEL_40:
            ++*(_DWORD *)(v25 + 8);
            v51 = v33;
            v55 = v25;
            sub_A74DF0(v28 + 7, &v55);
            *(_QWORD *)v56 = v25;
            sub_4A3CA0(v51, (__int64 **)v56);
          }
          else
          {
            ((void (__fastcall *)(_QWORD, __int64))v29)(*((_QWORD *)v2 + 62), v25);
          }
LABEL_41:
          v11 = v25;
        }
        v10 += 8;
        if ( v9 == v10 )
          break;
        v6 = *(_QWORD *)v2;
        v7 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
      }
    }
    else
    {
      v11 = 0;
    }
    return sub_A72BE0(v11, v53);
  }
  return result;
}

