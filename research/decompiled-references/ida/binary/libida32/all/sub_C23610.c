__int64 __fastcall sub_C23610(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v8; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r15d
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r15d
  unsigned int v17; // edx
  __int64 v18; // rax
  void *v19; // rax
  unsigned int v20; // eax
  bool v21; // cc
  __int64 v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-6Ch]
  unsigned int v24; // [rsp+Ch] [rbp-6Ch]
  void *v25; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-60h]
  char v27; // [rsp+1Ch] [rbp-5Ch]
  void *v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-50h]
  char v30; // [rsp+2Ch] [rbp-4Ch]
  void *v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-40h]
  char v33; // [rsp+3Ch] [rbp-3Ch]

  v8 = sub_C23520(a1, a4, a3, a4, a5, a6);
  if ( !(_BYTE)v8 )
    return v8;
  v32 = 64;
  v33 = 0;
  v31 = nullptr;
  v12 = sub_96A590((__int64 *)a4, (__int64 *)&v31);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(a4 + 8) <= 0x40u )
    {
      v22 = *(_QWORD *)a4;
      if ( *(_QWORD *)a4 )
      {
        v13 = v22 - 1;
        if ( (v22 & (v22 - 1)) == 0 )
        {
LABEL_9:
          v14 = sub_A884B0(*(_QWORD *)(a3 + 16), a2, v13, v10, v11);
          v15 = v14;
          v16 = v14 - 1;
          v32 = v14;
          if ( v14 > 0x40 )
          {
            v24 = v14;
            sub_21E1730(&v31, 0, 0);
            v17 = v32;
            v18 = 1LL << v16;
            v15 = v24;
            if ( v32 > 0x40 )
            {
              *((_QWORD *)v31 + (v16 >> 6)) |= v18;
              v19 = v31;
              goto LABEL_12;
            }
          }
          else
          {
            v31 = nullptr;
            v17 = v14;
            v18 = 1LL << v16;
          }
          v19 = (void *)((unsigned __int64)v31 | v18);
LABEL_12:
          v23 = v15;
          v26 = v17;
          v25 = v19;
          v27 = 1;
          if ( (int)sub_96A590((__int64 *)a4, (__int64 *)&v25) > 0 )
          {
            v31 = (void *)sub_E0FED0(a3, a1, 2380, 0);
            if ( v31 )
            {
              sub_BF6570((unsigned __int8 ***)&v31, (__int64)&v25);
              if ( v31 )
              {
                sub_AC60B0((unsigned __int8 **)v31, a2, 8u);
                if ( v31 )
                  sub_BF6570((unsigned __int8 ***)&v31, a4);
              }
            }
            v8 = 0;
          }
          else
          {
            sub_21E3050(&v31, a4, v23);
            v20 = v32;
            v30 = 1;
            v21 = *(_DWORD *)(a4 + 8) <= 0x40u;
            v29 = v32;
            v28 = v31;
            if ( v21 && v32 <= 0x40 )
            {
              *(_QWORD *)a4 = v31;
              *(_DWORD *)(a4 + 8) = v20;
              *(_BYTE *)(a4 + 12) = 1;
            }
            else
            {
              sub_21E1960(a4, &v28);
              v21 = v29 <= 0x40;
              *(_BYTE *)(a4 + 12) = v30;
              if ( !v21 && v28 )
                operator delete[](v28);
            }
          }
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          return v8;
        }
      }
    }
    else if ( (unsigned int)sub_21E2CA0(a4) == 1 )
    {
      goto LABEL_9;
    }
  }
  v31 = (void *)sub_E0FED0(a3, a1, 2416, 0);
  if ( v31 )
    sub_BF6570((unsigned __int8 ***)&v31, a4);
  return 0;
}

