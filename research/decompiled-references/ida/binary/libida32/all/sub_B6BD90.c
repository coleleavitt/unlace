__int64 __fastcall sub_B6BD90(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  char *vars0; // [rsp+0h] [rbp+0h] BYREF
  size_t vars8; // [rsp+8h] [rbp+8h]
  _QWORD vars10[3]; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]

  vars10[0] = a1;
  vars10[1] = a2;
  vars30 = 0;
  vars0 = "Android";
  vars8 = j__strlen("Android");
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "android", 7);
  v2 = j__strlen("Fuchsia");
  vars0 = "Fuchsia";
  vars8 = v2;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "fuchsia", 7);
  vars8 = j__strlen("iOS");
  vars0 = "iOS";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "ios", 3);
  v3 = j__strlen("macOS");
  vars0 = "macOS";
  vars8 = v3;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "macos", 5);
  v4 = j__strlen("tvOS");
  vars0 = "tvOS";
  vars8 = v4;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "tvos", 4);
  vars8 = j__strlen("watchOS");
  vars0 = "watchOS";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "watchos", 7);
  v5 = j__strlen("DriverKit");
  vars0 = "DriverKit";
  vars8 = v5;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "driverkit", 9);
  v6 = j__strlen("iOS (App Extension)");
  vars0 = "iOS (App Extension)";
  vars8 = v6;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "ios_app_extension", 17);
  vars8 = j__strlen("macOS (App Extension)");
  vars0 = "macOS (App Extension)";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "macos_app_extension", 19);
  v7 = j__strlen("tvOS (App Extension)");
  vars0 = "tvOS (App Extension)";
  vars8 = v7;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "tvos_app_extension", 18);
  v8 = j__strlen("watchOS (App Extension)");
  vars0 = "watchOS (App Extension)";
  vars8 = v8;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "watchos_app_extension", 21);
  vars8 = j__strlen("macCatalyst");
  vars0 = "macCatalyst";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "maccatalyst", 11);
  v9 = j__strlen("macCatalyst (App Extension)");
  vars0 = "macCatalyst (App Extension)";
  vars8 = v9;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "maccatalyst_app_extension", 25);
  v10 = j__strlen("visionOS");
  vars0 = "visionOS";
  vars8 = v10;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "xros", 4);
  vars8 = j__strlen("visionOS (App Extension)");
  vars0 = "visionOS (App Extension)";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "xros_app_extension", 18);
  v11 = j__strlen("Swift");
  vars0 = "Swift";
  vars8 = v11;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "swift", 5);
  v12 = j__strlen("Shader Model");
  vars0 = "Shader Model";
  vars8 = v12;
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "shadermodel", 11);
  vars8 = j__strlen("OpenHarmony OS");
  vars0 = "OpenHarmony OS";
  sub_B6BD10((__int64)vars10, (__int64 *)&vars0, "ohos", 4);
  if ( (_BYTE)vars30 )
    return vars10[2];
  else
    return 0;
}

