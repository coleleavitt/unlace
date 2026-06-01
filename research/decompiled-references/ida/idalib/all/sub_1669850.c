void __fastcall sub_1669850(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  const char *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  const char *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-70h] BYREF
  char *v19; // [rsp+8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+10h] [rbp-60h]
  char *v21; // [rsp+18h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-50h]
  const char *v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+30h] [rbp-40h]
  const char *v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]
  const char *v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h]

  if ( a2 && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v3 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v3 & 4) != 0 )
      v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
      v4 -= 64LL;
    if ( sub_B8EC80(v4) )
    {
      v5 = *(_QWORD *)(a2 + 40);
      v18 = a1;
      if ( (v5 & 7) == 0 && (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( !(_BYTE)byte_2CD8B68 && __cxa_guard_acquire(&byte_2CD8B68) )
        {
          v20 = 6;
          v19 = "insert";
          v21 = "insert_or_assign";
          v23 = "push";
          v25 = "push_front";
          v27 = "push_back";
          v22 = 16;
          v24 = 4;
          v26 = 10;
          v28 = 9;
          sub_1668FC0((__int64)&unk_2CD8B70, &v19, 5);
          __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8B70, &off_2B25620);
          __cxa_guard_release(&byte_2CD8B68);
        }
        v6 = sub_995750(a2);
        v8 = v7;
        v9 = sub_2244B30(v6, v7);
        if ( (unsigned int)sub_2244E60(&unk_2CD8B70, v6, v8, v9) != -1 )
          goto LABEL_17;
      }
      else
      {
        if ( !(_BYTE)byte_2CD8B88 && __cxa_guard_acquire(&byte_2CD8B88) )
        {
          v20 = 3;
          v19 = "map";
          v21 = "multimap";
          v23 = "unordered_map";
          v25 = "unordered_multimap";
          v22 = 8;
          v24 = 13;
          v26 = 18;
          sub_1668FC0((__int64)&unk_2CD8B90, &v19, 4);
          __cxa_atexit((void (*)(void *))sub_1068DE0, &unk_2CD8B90, &off_2B25620);
          __cxa_guard_release(&byte_2CD8B88);
        }
        if ( (unsigned int)sub_B77890(a2) == 43 )
        {
          v12 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
          v13 = (v12 & 4) != 0 ? *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL) : v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v13 )
            v13 -= 64;
          v14 = sub_995750(v13);
          v16 = v15;
          v17 = sub_2244B30(v14, v15);
          if ( (unsigned int)sub_2244E60(&unk_2CD8B90, v14, v16, v17) != -1 )
LABEL_17:
            sub_1664D50(&v18, a2, v10, v11);
        }
      }
    }
  }
}
