__int64 __fastcall sub_93DFF0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v21; // eax
  void *v22; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-80h]
  void *v24; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-70h]
  void *v26; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-60h]
  void *v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-50h]
  void *v30; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
    *a4 &= *(_DWORD *)(a3 + 8) - 1;
  v8 = sub_93DD50(a1, a2, a3, a4, v7);
  if ( (_BYTE)v8 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v10 = *a4;
    v23 = 3;
    v22 = &byte_7;
    v11 = *(_QWORD *)a3;
    v12 = v9 - 1;
    v13 = 1LL << ((unsigned __int8)v9 - 1);
    if ( v9 - 1 < v10 )
    {
      if ( v9 > 0x40 )
        v11 = *(_QWORD *)(v11 + 8LL * (v12 >> 6));
      if ( (v13 & v11) == 0 )
      {
        v21 = sub_831980(a3);
        *a4 = v21;
        sub_91FBE0((__int64)&v30, v21, v7);
        v27 = *(_DWORD *)(a3 + 8);
        if ( v27 <= 0x40 )
        {
          v26 = *(void **)a3;
          goto LABEL_55;
        }
LABEL_76:
        sub_2585B30(&v26);
        goto LABEL_55;
      }
    }
    else
    {
      if ( v9 <= 0x40 )
      {
        if ( (v13 & v11) != 0 )
        {
LABEL_7:
          sub_938B60((__int64)&v30, a3);
          sub_8CC270((__int64)&v24, (__int64)&v30);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v14 = (void *)*a4;
          v31 = 32;
          v30 = v14;
          sub_2587E20(&v28, &v30, v7);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v27 = v29;
          if ( v29 > 0x40 )
          {
            sub_2585B30(&v26);
            if ( v29 > 0x40 && v28 )
              operator delete[](v28);
          }
          else
          {
            v26 = v28;
          }
          v31 = v25;
          if ( v25 > 0x40 )
            sub_2585B30(&v30);
          else
            v30 = v24;
          sub_8CC680((__int64)&v30, (__int64)&v26, (__int64)&v22);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          if ( v27 > 0x40 && v26 )
            operator delete[](v26);
          sub_938170((__int64)&v30, (__int64)&v22);
          if ( v23 > 0x40 && v22 )
            operator delete[](v22);
          v15 = v31;
          v22 = v30;
          v23 = v31;
          if ( v25 > 0x40 )
          {
            v16 = v24;
            if ( v24 )
              goto LABEL_28;
          }
LABEL_34:
          v27 = v15;
          v17 = *(_QWORD *)(a1 + 184);
          if ( (unsigned int)v15 > 0x40 )
            goto LABEL_30;
          goto LABEL_35;
        }
LABEL_48:
        v30 = (void *)v10;
        v31 = 32;
        sub_2587E20(&v28, &v30, v7);
        if ( v31 > 0x40 && v30 )
          operator delete[](v30);
        v31 = v29;
        if ( v29 > 0x40 )
        {
          sub_2585B30(&v30);
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
        }
        else
        {
          v30 = v28;
        }
        v27 = *(_DWORD *)(a3 + 8);
        if ( v27 <= 0x40 )
        {
          v26 = *(void **)a3;
LABEL_55:
          sub_8CC270((__int64)&v28, (__int64)&v26);
          sub_8CC680((__int64)&v28, (__int64)&v30, (__int64)&v22);
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          if ( v27 > 0x40 && v26 )
            operator delete[](v26);
          if ( v31 <= 0x40 || (v16 = v30) == nullptr )
          {
LABEL_29:
            v15 = v23;
            v17 = *(_QWORD *)(a1 + 184);
            v27 = v23;
            if ( v23 > 0x40 )
            {
LABEL_30:
              sub_2585B30(&v26);
              v15 = v27;
LABEL_36:
              sub_2587E20(&v30, &v26, v15);
              v29 = v31;
              if ( v31 > 0x40 )
              {
                sub_2585B30(&v28);
                if ( v31 > 0x40 && v30 )
                  operator delete[](v30);
              }
              else
              {
                v28 = v30;
              }
              v18 = sub_A1A4E0(v17, 16);
              v19 = v29;
              v29 = 0;
              *(_DWORD *)(v18 + 8) = v19;
              *(_QWORD *)v18 = v28;
              if ( v27 > 0x40 && v26 )
                operator delete[](v26);
              if ( v23 > 0x40 && v22 )
                operator delete[](v22);
              return v8;
            }
LABEL_35:
            v26 = v22;
            goto LABEL_36;
          }
LABEL_28:
          operator delete[](v16);
          goto LABEL_29;
        }
        goto LABEL_76;
      }
      if ( (*(_QWORD *)(v11 + 8LL * (v12 >> 6)) & v13) == 0 )
        goto LABEL_48;
      if ( v9 != (unsigned int)sub_2587400(a3) )
        goto LABEL_7;
    }
    sub_8F62E0((__int64)&v30, v9);
    v15 = v31;
    v22 = v30;
    v23 = v31;
    goto LABEL_34;
  }
  return v8;
}

