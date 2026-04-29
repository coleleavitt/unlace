__int64 __fastcall sub_264BE0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v8; // rdi
  __int64 v10; // rdx
  int v11; // eax
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // r8d
  __int64 (__fastcall *v19)(_QWORD *, _QWORD, void *, const char *); // r11
  const char *v21; // rcx
  int v22; // eax
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // [rsp+4h] [rbp-84h]
  unsigned int v27; // [rsp+4h] [rbp-84h]
  __int64 (__fastcall **v28)(); // [rsp+10h] [rbp-78h] BYREF
  __int64 v29; // [rsp+18h] [rbp-70h]
  __int128 v30; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  char v33; // [rsp+40h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a4[5] )
    return 0;
  v4 = *(_QWORD *)(a2 + 816);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(v4 + 8) = 1;
    v8 = a4[5];
    if ( a1 )
    {
      v10 = *(_QWORD *)a1;
      v11 = *(_DWORD *)(a1 + 8);
    }
    else
    {
      v10 = -1;
      v11 = 0;
    }
    v26 = a3;
    v28 = (__int64 (__fastcall **)())v10;
    LODWORD(v29) = v11;
    v12 = sub_253620(v8, (unsigned __int64 *)&v28);
    v15 = get_merge_state(v8, &v28, v13, v14) & 3;
    if ( !v15 )
    {
      v16 = v12 & 1;
      if ( v16 )
      {
        v17 = *(_DWORD *)(a1 + 8);
        v18 = v26;
        v19 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a4;
        if ( v17 > 69 )
        {
          v21 = (const char *)&unk_3FC793;
          if ( (unsigned int)v17 <= 0x54 )
          {
            v21 = (const char *)*(&off_4C07A0 + v17);
            if ( v17 == 83 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 64LL) )
                v21 = "__wind";
            }
          }
          v27 = v15;
          v22 = v19(a4, v18, &unk_3FD0D2, v21);
          v23 = v27;
          v24 = (unsigned int)(*(_DWORD *)(a1 + 8) - 71);
          if ( (unsigned int)v24 <= 0xC )
            v23 = dword_40ED80[v24];
          sub_25DEC0((void **)a1, a2, v22, 0, "...", a4, v23);
          v25 = a4[5];
          v29 = 0;
          v32 = v25;
          v31 = 0;
          v33 = 0;
          v28 = off_4C06B8;
          v30 = 0;
          sub_263CF0(a1, 0, &v28, 0);
          v28 = (__int64 (__fastcall **)())&off_4C3D58;
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(v29);
          }
          v5 = v16;
        }
        else
        {
          v5 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, char *))v19)(a4, v26, "...");
        }
      }
    }
    --*(_DWORD *)(v4 + 8);
  }
  return v5;
}
