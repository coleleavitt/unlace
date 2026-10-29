__int64 __fastcall sub_8B6000(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  __int64 v3; // r15
  time_t v4; // rax
  time_t v5; // rdx
  const char *v6; // r14
  time_t v7; // rdx
  bool v8; // cc
  const char *v9; // rax
  const char *v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 *v13; // rax
  char v14; // dl
  __int64 v16; // [rsp+0h] [rbp-90h]
  __int64 v17; // [rsp+8h] [rbp-88h]
  char v18; // [rsp+17h] [rbp-79h] BYREF
  __int64 v19; // [rsp+18h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-70h] BYREF
  void *v21[2]; // [rsp+28h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-50h]
  __int64 *v24; // [rsp+48h] [rbp-48h]
  char v25; // [rsp+50h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-38h]

  v1 = *(_BYTE *)(a1 + 504) == 0;
  v26 = __readfsqword(0x28u);
  if ( v1 )
    sub_8ACE00(a1);
  while ( 1 )
  {
    sub_8AC5D0(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Sleeping (at most) %d seconds\n", *(_DWORD *)(a1 + 496));
    if ( (unsigned __int8)qsem_wait(*(_QWORD *)(a1 + 416), (unsigned int)(1000 * *(_DWORD *)(a1 + 496))) )
      break;
    if ( (unsigned int)sub_8B58B0(a1) != 1 )
    {
      v17 = *(_QWORD *)(a1 + 424);
      qmutex_lock(v17);
      v2 = *(_QWORD *)a1;
      v18 = 0;
      v19 = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(v2 + 88))(a1, &v18, &v19);
      if ( v3 )
      {
        sub_8AC5D0(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Checking license validity\n");
        v4 = time(nullptr);
        v5 = *(_QWORD *)(v3 + 104);
        v16 = *(_QWORD *)(a1 + 32);
        if ( v5 == -1 || (v6 = "not started yet", v4 >= v5) )
        {
          v7 = *(_QWORD *)(v3 + 112);
          v6 = "valid";
          if ( v7 )
          {
            if ( v4 >= v7 - 2592000 )
            {
              v6 = "starting to expire";
              if ( v4 >= v7 - 1296000 )
              {
                v6 = "close to expiration";
                if ( v4 >= v7 )
                {
                  v6 = "within the grace period";
                  if ( v4 >= v7 + 1296000 )
                  {
                    v8 = v4 < v7 + 2592000;
                    v9 = "beyond the grace period";
                    if ( v8 )
                      v9 = "reaching the end of the grace period";
                    v6 = v9;
                  }
                }
              }
            }
          }
        }
        ptr = nullptr;
        *(_OWORD *)v21 = 0;
        sub_35A790((char **)&ptr);
        v10 = haystack;
        if ( v21[0] )
          v10 = (const char *)ptr;
        sub_8AC5D0(v16, (__int64)"[monitor] License %s validity now: %s\n", v10, v6);
        if ( ptr )
        {
          v21[0] = nullptr;
          qfree(ptr);
        }
        v13 = nullptr;
        if ( v18 )
          v13 = &v19;
        v14 = *(_BYTE *)(a1 + 504);
        ptr = off_2B3D2D0;
        v21[0] = nullptr;
        v24 = v13;
        v25 = v14;
        v21[1] = nullptr;
        v22 = a1;
        v23 = v3;
        callui(86, (int)&ptr, 0, (int)&callui, v11, v12);
      }
      qmutex_unlock(v17);
    }
  }
  sub_8AC5D0(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Exit request received\n");
  return 0;
}
