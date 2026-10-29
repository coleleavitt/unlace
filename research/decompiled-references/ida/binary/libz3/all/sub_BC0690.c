__int64 __fastcall sub_BC0690(__int64 a1, unsigned int *a2, double a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  void *v10; // rbx
  _DWORD *v13; // rdx
  int v14; // ecx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  void **v18; // rsi
  __int64 v19; // rax
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  unsigned int v22; // r13d
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // eax
  _DWORD *v30; // [rsp+8h] [rbp-E0h]
  __int64 v31[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-B8h] BYREF
  void *v33[4]; // [rsp+40h] [rbp-A8h] BYREF
  void *v34[2]; // [rsp+60h] [rbp-88h] BYREF
  char v35; // [rsp+70h] [rbp-78h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  v31[0] = 0;
  v31[1] = 0;
  v8 = *(_QWORD *)(v7 + 8984);
  v32[0] = 1;
  v32[1] = 0;
  if ( qword_1C7ED88 != v8 || (v9 = *(unsigned __int8 *)(v7 + 2416), (_BYTE)v9) )
  {
LABEL_2:
    v9 = 1;
    goto LABEL_3;
  }
  if ( !*((_WORD *)a2 + 2) )
  {
    v13 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a1 + 1744);
      if ( *v13 == v14 && v13[1] == 42 && a2[6] == 1 )
      {
        v15 = *((_DWORD **)a2 + 4);
        v16 = *(_QWORD *)(v7 + 8656);
        v34[0] = nullptr;
        v30 = v15;
        v17 = *a2;
        v18 = v34;
        if ( v16 && (unsigned int)v17 < *(_DWORD *)(v16 - 4) )
          v18 = (void **)(v16 + 8LL * (unsigned int)v17);
        if ( *v18 )
        {
          v19 = **(_QWORD **)(*(_QWORD *)(v16 + 8 * v17) + 8LL);
          if ( (*(_WORD *)(v19 + 4)
             || (v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL)) == nullptr
             || v14 != *v20
             || v20[1] != 41)
            && (unsigned __int8)sub_BE5590((int)a1 + 3856, (_DWORD)v30, (unsigned int)v31, v14, a6, a7)
            && (v32[0] & 0x100000000LL) == 0
            && LODWORD(v32[0]) == 1
            && SLODWORD(v31[0]) >= 0 )
          {
            sub_1850940(v33, qword_1C7F2C0, v31);
            sub_18007F0(v34, v33[0]);
            v21 = (_DWORD *)sub_1648610(a1 + 1728, v34);
            v22 = sub_966380(a1, a2, v21);
            if ( v34[0] != &v35 && v34[0] )
              sub_186B220(v34[0]);
            sub_233E40((__int64)v33);
            v25 = *(_QWORD *)(a1 + 16);
            v26 = *(_BYTE *)(*(_QWORD *)(v25 + 8848) + v22);
            if ( v26 != 1 )
            {
              if ( v26 == -1 )
              {
                if ( !*(_QWORD *)(a1 + 1840) )
                  sub_16669E0(a1 + 1832);
                v28 = (_DWORD *)sub_166A700(*(_QWORD *)(a1 + 1840), (unsigned int)v31, 1, v25, v23, v24);
                v29 = sub_966380(a1, v30, v28);
                sub_BBF3C0((_QWORD *)a1, v29 ^ 1, v22, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
              }
              else
              {
                v27 = *(_QWORD *)(v25 + 8872) + 16LL * (v22 >> 1);
                *(_BYTE *)(v27 + 11) = *(_BYTE *)(v27 + 11) & 0xF3 | (8 * !(v22 & 1) + 4);
                sub_9936C0(*(_QWORD *)(a1 + 16), v22 >> 1);
              }
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
LABEL_3:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v10, v32);
  return v9;
}

