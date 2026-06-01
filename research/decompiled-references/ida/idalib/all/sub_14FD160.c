__int64 __fastcall sub_14FD160(__int64 a1, int a2)
{
  int *v4; // rbp
  int v5; // r14d
  __int64 v6; // rbp
  char v8; // al
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  _BYTE *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rsi
  unsigned int v16; // ebx
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // ax
  size_t v22; // rax
  __int16 v23; // ax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  bool v26; // zf
  __int64 *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // eax
  __int16 v31; // dx
  __int16 v32; // [rsp+Eh] [rbp-15Ah]
  __int64 v33; // [rsp+18h] [rbp-150h]
  int v34; // [rsp+2Ch] [rbp-13Ch] BYREF
  _BYTE *v35; // [rsp+30h] [rbp-138h] BYREF
  char v36; // [rsp+38h] [rbp-130h]
  __int64 v37; // [rsp+40h] [rbp-128h]
  int v38; // [rsp+48h] [rbp-120h]
  __int16 v39; // [rsp+4Ch] [rbp-11Ch]
  __int64 (__fastcall *v40)(__int64); // [rsp+50h] [rbp-118h]
  __int64 v41; // [rsp+58h] [rbp-110h]
  __int64 v42; // [rsp+60h] [rbp-108h]
  unsigned __int8 *v43[10]; // [rsp+70h] [rbp-F8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-A0h]
  _BYTE v46[152]; // [rsp+D0h] [rbp-98h] BYREF

  v4 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    v34 = 0;
    v37 = a1;
    ptr = v46;
    v45 = 0xC00000000LL;
    v35 = (_BYTE *)(a1 + 1952);
    v8 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v36 = v8;
    v40 = sub_146A990;
    v39 = 63;
    v38 = 1507350;
    v41 = 0;
    v42 = 0;
    sub_149FA40((__int64)&v35);
    v9 = *(_WORD *)(a1 + 32);
    v32 = v9;
    if ( v9 == 22 )
    {
      sub_146A990(a1);
      v9 = *(_WORD *)(a1 + 32);
    }
    if ( v9 == 3 )
    {
LABEL_7:
      v10 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v10 + 760) )
      {
        *(_BYTE *)(v10 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v10 + 48) + 6LL) = 1;
      }
      v11 = *(_QWORD *)(a1 + 96);
      v12 = ptr;
      *(_WORD *)(a1 + 32) = 1;
      sub_171ECA0(*(_QWORD *)(v11 + 656), *(_QWORD *)(v11 + 608), v12, (unsigned int)v45);
LABEL_10:
      v6 = 1;
    }
    else
    {
      v14 = sub_14FCFD0(a1, &v34);
      if ( v14 || (v31 = *(_WORD *)(a1 + 32), v31 == 72) || v31 == 62 )
      {
        v15 = (__int64 *)v14;
        v16 = 0;
        sub_14FA200((__int64)&ptr, v14);
        v21 = *(_WORD *)(a1 + 32);
        if ( v21 != 23 )
        {
          while ( 1 )
          {
            if ( v21 == 72 )
            {
              v27 = *(__int64 **)(a1 + 8);
              v15 = (__int64 *)v4;
              ++v16;
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v27, v4);
              v28 = (unsigned int)v45;
              v18 = HIDWORD(v45);
              v29 = (unsigned int)v45 + 1LL;
              if ( v29 > HIDWORD(v45) )
              {
                v15 = (__int64 *)v46;
                sub_2237220(&ptr, v46, v29, 8);
                v28 = (unsigned int)v45;
              }
              v17 = ptr;
              *((_QWORD *)ptr + v28) = 0;
              LODWORD(v45) = v45 + 1;
            }
            else
            {
              v22 = j__strlen(&byte_22F0C30);
              v15 = (_QWORD *)&word_3E;
              if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v22) )
                goto LABEL_10;
            }
            v23 = *(_WORD *)(a1 + 32);
            ++v16;
            if ( v23 == 23 )
              break;
            if ( v23 == 3 )
              goto LABEL_7;
            LODWORD(v43[0]) = 0;
            v24 = sub_14FCFD0(a1, v43);
            v18 = (unsigned int)v45;
            v15 = (__int64 *)HIDWORD(v45);
            v25 = (unsigned int)v45 + 1LL;
            if ( v25 > HIDWORD(v45) )
            {
              v15 = (__int64 *)v46;
              v33 = v24;
              sub_2237220(&ptr, v46, v25, 8);
              v18 = (unsigned int)v45;
              v24 = v33;
            }
            v17 = ptr;
            *((_QWORD *)ptr + v18) = v24;
            LODWORD(v45) = v45 + 1;
            v26 = v24 == 0;
            v21 = *(_WORD *)(a1 + 32);
            if ( v26 && v21 != 72 && v21 != 62 )
            {
              if ( v32 != 22 || v21 != 23 )
                goto LABEL_31;
              goto LABEL_26;
            }
          }
        }
        if ( v32 == 22 )
LABEL_26:
          sub_146A990(a1);
LABEL_31:
        sub_14808E0((__int64)&v35, v15, (__int64)v17, v18, v19, v20);
        v30 = sub_FE3230((_QWORD *)(*(_QWORD *)(a1 + 8) + 680LL), v16, (unsigned __int64 *)ptr);
        v6 = sub_19E5F20(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v30, a2, v5, v42, HIDWORD(v42), v32 != 22);
      }
      else
      {
        v6 = 1;
        sub_1564840(v43, a1, a1 + 16, 14);
        sub_AE9DF0(v43, 5, 4u);
        sub_AEA040((__int64)v43);
      }
    }
    v13 = ptr;
    *v35 = v36;
    if ( v13 != v46 )
      free(v13);
  }
  else
  {
    v6 = 1;
    sub_1564840(&ptr, a1, a1 + 16, 1625);
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"@selector", 1u);
    sub_AEA040((__int64)&ptr);
  }
  return v6;
}
